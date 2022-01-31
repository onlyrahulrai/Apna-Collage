#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;
    for(int counter=1;counter<=n;counter++){
        sum += counter;
    }

    cout<<sum<<endl;
    return 0;
}