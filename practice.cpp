#include<iostream>
using namespace std;
#include<vector>

int main()
{
   vector<int> a{0,0,1,1,1,2,2,3,3,4} ;
   vector<int> b;
   if (!a.empty()) {
        b.push_back(a[0]);
        for (int i = 1; i < a.size(); i++) {
            if (a[i] != a[i - 1]) {
                b.push_back(a[i]);
            }
        }
    }

   for(auto i:b)
   {
       cout<<i<<"\t";
   }
}

