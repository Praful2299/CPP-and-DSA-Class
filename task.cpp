//WAP a program to conver given string in lower case   // A=65 Z=90
                                                       // a=97 z=122       difference is of 32

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1;
    cout<<"Enter a name :";
    cin>>s1;

    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }

    cout<<s1;
}
