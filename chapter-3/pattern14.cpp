#include<iostream>
using namespace std;

/* ----- Zig-Zag Pattern ----- */

/*

1       *       *
2     *   *   *   *
3   *       *       *
    1 2 3 4 5 6 7 8 9

*/

int main(){
    int n;

    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}


