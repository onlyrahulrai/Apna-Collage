#include<iostream>

using namespace std;

int main(){
    int a = 4,b = 3,c;

    c = b<<a;

    b = c * (b*(++a)--);

    a = a>>b;

    cout<<b<<" "<<c<<endl;
    return 0;
}