#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>>

int main()
{
    vector<int> v{14,54,58,4,5,454,44};

    cout<<all_of(v.begin(),v.end(),[](int a){return a>40;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int a){return a>40;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int a){return a>40;});
}
