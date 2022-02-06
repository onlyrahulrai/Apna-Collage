#include<iostream>
using namespace std;

/* ----- Hollow Diamond ----- */

/* 

1    - - - - * - - - -
2    - - - * - * - - -
3    - - * - - - * - -
4    - * - - - - - * -    
5    * - - - - - - - * 
6    * - - - - - - - * 
7    - *  - - - -  * -
8    - - * - - - * - - 
9    - - - * - * - - - 
10   - - - - * - - - - 
    1 2 3 4  5 6  7 8 9

*/


int main(){
    int n;

    cin>>n;

    int space = (2 * n - 1) / 2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for (int j=1;j<=(2*i-1);j++)
        {
            if(j == 1 || j == 2 * i -1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
        space--;
    }

    space = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++)
        {
            if(j == 1 || j == 2* i -1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
        space++;
    }

    return 0;
}