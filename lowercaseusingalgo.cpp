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

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    cout<<s1;
    }



