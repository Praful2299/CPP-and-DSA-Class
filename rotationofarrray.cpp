#include<iostream>
using namespace std;
#include<array>

int main()
{

    array<int,5>a={1,2,3,4,5};
    array<int,5> temp;
    int st;

    cout<<"Enter number of rotation:";
    cin>>st;

    int n=a.size();

    for(int i=0;i<n;i++){
        temp[(i+st)%n]=a[i];
    }

    for(auto p:temp)
    {
        cout<<p<<" ";
    }

}
