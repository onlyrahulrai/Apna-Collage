#include<iostream>

using namespace std;

int main(){
    int i=0;

        //0 //0 //1 //0
    i = i++ - --i + ++i + --i + i-- + ++i + --i;
    cout<<i<<endl;

    return 0;
}