#include<iostream>
using namespace std;

int main(){
    int start,end;

    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the ending number: ";
    cin>>end;

    for(int i=start;i<=end;i++){
        int num = i; 
        int sum = 0;

        /* ----- Method 1 ----- */
        
        // while(num != 0){
        //     int lastdigit = num % 10;
        //     sum += (lastdigit * lastdigit * lastdigit);
        //     num /= 10;
        // }

        /* ----- Method 2 ----- */
        
        for(;num>0;num/=10){
            int lastdigit = num % 10;
            sum += (lastdigit * lastdigit * lastdigit);
        }

        if(sum == i){
            cout<<sum<<endl;
        }
    }

    return 0;
}