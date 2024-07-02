#include<iostream>
using namespace std;
#include<map>

int main()
{
    multimap<int , int> mmp;    // multi map is 100% similar like map it just allows duplicate key!

    mmp.insert({1,21});
    mmp.insert({5,81});
    mmp.insert({7,11});
    mmp.insert({8,95});
    mmp.insert({9,38});
    mmp.insert({9,58});


    for(auto p:mmp)
    {
        if(p.first==9)
        {
            cout<<p.first<<"\t"<<p.second<<"\n";  // if we want to see the stored data at same key value we can use this condition
        }
    }
}

