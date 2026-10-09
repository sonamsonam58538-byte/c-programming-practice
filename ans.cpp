#include <iostream>
using namespace std;
void main(){
char st;
cout<<"Enter character ";
cin>>st;
switch(st){
    case 'a':
    case 'e':
    case 'i':
    case 'o' :
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<"Vovel";
    break;
    default {
        cout<<"Consonant";
    }
    
}
}
