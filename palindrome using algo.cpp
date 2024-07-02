//WAP TO FIND OUT THE GIVEN STRING IS PALINDROME OR NOT ?

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    string s,s2;
    cout<<"Enter a name:";
    cin>>s;
    s2=s;

    reverse(s.begin(),s.end());

    if(s==s2){
        cout<<"given string is palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }

}
