#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"\n"<<"Prime Numbers"<<endl;
    for (int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }

        if(i==num){
            cout<<num<<endl;
        }
    }
}