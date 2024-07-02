#include<iostream>
using namespace std;
#include<vector>
#include<array>

int main()
{
    array<int,6> a={1,2,3,4,5,6};
    array<int,6> temp;
    int k=4;
    int s=a.size();
    for(int i=0;i<s;i++)
    {
        temp[(i+k)%s]=a[i];

    }

    for(auto p:temp)
    {

        cout<<p<<" ";
    }


}
