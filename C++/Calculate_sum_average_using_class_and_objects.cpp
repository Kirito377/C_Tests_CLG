#include<iostream>
using namespace std;
class calulator{
private:
    int number[5];
public:
    void input(){
        cout << "Enter 5 number" << endl;
        for (int i = 0; i < 5; i++){
            cout << "Enter number" << i+1 <<": ";
            cin >> number[i];
        }
    }

    int calsum(){
        int sum=0;
        for (int i = 0; i < 6; i++){
            sum += number[i];
        }
        return sum;
    }

    double calavg(){
        int sam = calsum();
        return static_cast<double>(sam)/5.0;
    }
};

int main(){
    calulator calcu;
    calcu.input();

    cout <<"Sum is : "<<calcu.calsum() << endl;
    cout <<"Average is "<< calcu.calavg() << endl;
    return 0;
}