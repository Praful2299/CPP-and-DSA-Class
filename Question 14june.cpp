//WAP TO SUM OF TWO VALUES USING TARGET VALUE.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v={2,5,4,6,8,9};
    int target;

    cout<<"Enter target value :";
    cin>>target;
    cout<<endl;

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==target)
            {
                cout<<v[i]<<"\t"<<v[j]<<endl;
            }
        }
    }
}
