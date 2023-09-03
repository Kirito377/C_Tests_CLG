#include<iostream>
using namespace std;
class Multiply{
    private:
        int num1,num2;
    public:
        void input(int numbe1,int numbe2){
            num1 = numbe1;
            num2 = numbe2;
        }        

        int multiply(){
            return num1*num2;
        }
};
int main(){
    Multiply multiply;
    int n1,n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    multiply.input(n1,n2);
    cout << "Ans is : " << multiply.multiply();
    return 0;
}