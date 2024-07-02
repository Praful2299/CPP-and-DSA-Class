#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main()
{
      vector<int> v{10,3,5,4,6,8,2};

      for(auto a:v)
      {
          cout<<a<<"\t";
      }

      cout<<endl;

      sort(v.begin(),v.end());

       for(auto a:v)
      {
          cout<<a<<"\t";
      }

      cout<<endl;
      sort(v.begin(),v.end(),[](int a,int b){return a>b;});

       for(auto a:v)
      {
          cout<<a<<"\t";
      }
}
