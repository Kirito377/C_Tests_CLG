#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char digit[10][7]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    int j;
    long i=10,L,l;
    cout << "Enter a positive number : ";
    cin >> l;
    while (i<l)
    {
        i*=10;
        while (l>0)
        {
            i/=10;
            j=l/i;
            l%=i;
            cout << " " << digit[j];
        }
        
    }
    
    return 0;
}