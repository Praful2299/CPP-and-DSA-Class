#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){

    vector<tuple<int,string,int>>v;
    int n,roll,age;
    string name;

    cout<<"Enter number of records: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter roll no, : \n";
        cin>>roll;
        cout<<"Enter name : \n";
        cin>>name;
        cout<<"Enter age: \n";
        cin>>age;
        v.push_back({roll,name,age});
    }

    for(int i=0;i<n;i++)
    {
        cout<<get<0>(v[i])<<"\t";
        cout<<get<1>(v[i])<<"\t";
        cout<<get<2>(v[i]);
    }
}
