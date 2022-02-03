#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;


    int sum=0;
    int original = n;

    while(original != 0){
        int lastdigit = original%10;
        sum += (lastdigit*lastdigit*lastdigit);
        original /= 10;
    }

    if(sum==n){
        cout<<"Armstrong Number "<<endl;
    }else{
        cout<<"Not Armstrong Number "<<endl;
    }

    return 0;
}