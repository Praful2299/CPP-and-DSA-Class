#include<iostream>
using namespace std;
#include<map>
#include<vector>

void twosum(vector<int> v , int t){
    map<int , int> mp;
    for(int i=0;i<v.size();i++)
    {
        int n1=v[i];
        int sum=t-n1;
        if(mp.find(sum)!=mp.end())
        {
            cout << "Pair found: (" << mp[sum] << ", " << i << ")" << endl;
            return;
        }
        mp[n1] = i;
    }
    cout << "No pair found" << endl;
}

int main()
{
    vector<int> v {1,3,6,4,5};
    int target=10;
    twosum( v, target);

}
