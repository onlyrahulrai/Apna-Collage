#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int original = n;
    int reverse = 0;

    while (n != 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    if(original == reverse){
        cout<<"Palindrome Number "<<endl;
    }else{
        cout<<"Not Palindrome Number "<<endl;
    }

    return 0;
}