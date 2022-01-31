#include<iostream>

using namespace std;

int main(){
    char c;

    cout<<"Enter an alphabet: ";
    cin>>c;

    switch (c)
    {
    case 'a':
    case 'A':
        cout<<"It is a vowel"<<endl;
        break;
    case 'e':
    case 'E':
        cout<<"It is a vowel"<<endl;
        break;
    case 'i':
    case 'I':
        cout<<"It is a vowel"<<endl;
        break;
    case 'o':
    case 'O':
        cout<<"It is a vowel"<<endl;
        break;
    case 'u':
    case 'U':
        cout<<"It is a vowel"<<endl;
        break;
    
    default:
        break;
    }

    cout<<5&&6 ;

    return 0;
}