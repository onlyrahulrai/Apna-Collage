#include<iostream>

using namespace std;

int main(){
    int amount1;

    cout<<"Enter first amount: ";
    cin>>amount1; // >> insertion operator

    int amount2;
    cout<<"Enter second amount: ";
    cin>>amount2;  // >> insertion operator

    int sum = amount1 + amount2;
    cout<<"Sum of "<<amount1<<" and "<<amount2<<" is "<<sum<<endl;

    return 0;
}