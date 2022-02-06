#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int minNumber = INT_MAX;
    int maxNumber = INT_MIN;

    /* ----- Method 1 ----- */

    for(int j=1;j<=n;j++){
        minNumber=min(minNumber,arr[j]);
        maxNumber=max(maxNumber,arr[j]);
    }

    cout<<"Min Number is "<<minNumber<<" and Max Number is "<<maxNumber<<endl;

    /* ----- Method 2 ----- */

    // for(int j=1;j<=n;j++){
    //     if (arr[j]>maxNumber)
    //     {
    //         maxNumber = arr[j];
    //     }

    //     if(arr[j]<minNumber){
    //         minNumber = arr[j];
    //     }
    // }

    

    return 0;
}