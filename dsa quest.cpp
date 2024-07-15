#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v={5,3,7,6,2};
    vector<int> v1;

    for(int i=0;i<5;i++)
    {
        v[i]=v[i+1]*v[i+2]*v[i+3]-v[i+4];
        v1.push_back(v[i]);
    }

    for(auto p:v1)
    {
        cout<<p<<" ";
    }
}
