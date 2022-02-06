#include<iostream>
using namespace std;

int fact(int n){
    int sum = 1;

    for(int i=1;i<=n;i++){
        sum*=i;
    }

    return sum;
}

int main(){
    int n,r;

    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}