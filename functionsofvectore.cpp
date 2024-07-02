#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<int> v={1,2,3,4,5,6,4,1,2,4,5,4};

    cout<<count(v.begin(),v.end(),4)<<endl;
    cout<<min_element(v.begin(),v.end())-v.begin()<<endl;
    cout<<max_element(v.begin(),v.end())-v.begin()<<endl;
     cout<<*max_element(v.begin(),v.end())<<endl;
      cout<<*min(v.begin(),v.end());
}
