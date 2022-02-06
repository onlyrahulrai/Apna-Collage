#include<iostream>
using namespace std;

int main(){

    // int arr[4] = {10,20,30,40};
    // cout<<arr[2]<<endl;

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int j=1;j<=n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}