#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int> st;
    stack<int> temp;
    int n,d;
    cout<<"Enter number of records  ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>d;
        st.push(d);
    }
    for(int i=0;i<n;i++)
    {
        temp.push(st.top()-- );
    }
     cout<<"Output \n";
    while(!st.empty())
    {
        cout<<temp.top()<<endl;
        temp.pop();
    }
}
