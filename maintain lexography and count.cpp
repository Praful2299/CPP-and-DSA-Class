//wap to insert a data and maintain lexography order and count if any name repeats.

#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<string,int> mp;
    int n;
    string name;

    cout<<"Enter number of records : \n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter your name :";
        cin>>name;
        mp[name]++;                      // when we are not passing any integer(i.e value) number it by-default take it as 0 , and we have incremented it so it results 1
    }


    for(auto p:mp)
    {
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
}
