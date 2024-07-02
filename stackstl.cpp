#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int>st;
    st.push(8);
    st.push(2);
    st.push(40);
    st.push(13);
    st.push(10);

    while(!st.empty())
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
}
