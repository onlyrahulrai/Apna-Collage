#include<iostream>
using namespace std;

int main(){
    char c;
    bool isLowercaseVowel,isUppercaseVowel;

    cout<<"Enter a character: ";

    cin>>c;


    /* ----- Method 1 ----- */

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(!isalpha(c)){
        cout<<"Error! Non-alphabetic character. "<<endl;
    }else if(isLowercaseVowel || isUppercaseVowel){
        cout<<c<<" is a vowel."<<endl;
    }else{
        cout<<c<<" is a consonant. "<<endl;
    }

    /* ----- Method 2 ----- */
    // switch(c){
    //     case 'a':
    //     case 'A':
    //         cout<<"Vowel";
    //         break;
    //     case 'e':
    //     case 'E':
    //         cout<<"Vowel";
    //         break;
    //     case 'i':
    //     case 'I':
    //         cout<<"Vowel";
    //         break;
    //     case 'o':
    //     case 'O':
    //         cout<<"Vowel";
    //         break;
    //     case 'u':
    //     case 'U':
    //         cout<<"Vowel";
    //         break;
    //     default:
    //         cout<<"Consonant";
    //         break;
    // }

    return 0;

}