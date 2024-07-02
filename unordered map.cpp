#include<iostream>
using namespace std;
#include<unordered_map>

int main()
{
    unordered_map<int , int> up;

    up.insert({1,21});
    up.insert({5,81});
    up.insert({7,11});
    up.insert({8,95});
    up.insert({9,38});


    for(auto p:up)
    {
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
}
