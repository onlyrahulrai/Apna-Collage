#include<iostream>
using namespace std;

void fibonacci(int num){
    int a = 0;
    int b = 1;
    int nextTerm = 0;
    if(num == 1){
        cout<<a<<" ";
    }else if (num == 2)
    {
        cout<<a<<" "<<b<<" ";
    }else{
        cout<<a<<" "<<b<<" ";
        for (int i=1;i<=num-2;i++)
        {
            nextTerm = a + b;
            a = b;
            b = nextTerm;

            cout<<nextTerm<<" ";
        }
    }

    return;
}

int main(){
    int n;

    cin>>n;

    fibonacci(n);

    return 0;

}