#include<iostream>
using namespace std;
#include<stack>

int main()
{
 stack <int> st;
 int n,d,mn;
 mn=INT_MAX;
 cout<<"Enter number of records: ";
 cin>>n;

 for(int i=0;i<n;i++)
 {
     cin>>d;
     st.push(d);
 }
 cout<<"Output \n";

 while(!st.empty())
 {
     if(mn>st.top())
     {
         mn=st.top();
     }
     st.pop();
 }
 cout<<"Minimum value in stack:"<<mn;
}
