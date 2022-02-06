#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;

    cin>>n;

    int arr[n];

    int key;
    cin>>key;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<linearSearch(arr,n,key);

    return 0;
}