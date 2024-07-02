#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<int,string> mp;

    mp.insert({1,"sun"});
    mp.insert({5,"tue"});
    mp.insert({1,"mon"});
    mp[4];                  // this will not generate error it will provide null value at 4th key
    mp[7]="Tuesday";        // here we have updated the value of 7th key
    mp[3]="wednesday";      // we can insert in this way also.

    cout<<mp[7]<<"\n";

    for(auto p:mp)
    {
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
 }
