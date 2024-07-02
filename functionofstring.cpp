#include<iostream>
#include<algorithm>
using namespace std;

int main(){
 string s1;
 s1="welcome";

 reverse(s1.begin(),s1.end());
 cout<<s1<<endl;

 sort(s1.begin(),s1.end());      //ascending order
 cout<<s1<<endl;

 sort(s1.begin(),s1.end(),greater<int>());
 cout<<s1;

}
