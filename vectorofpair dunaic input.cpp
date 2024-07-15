#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int rec,roll;
string name;
vector<pair<int,string>> v;

cout<<"Enter number of records \n";
cin>>rec;

for(int i=0;i<rec;i++)
{
    cout << "Enter roll no \n";
    cin>> roll;
    cout<<"Enter name \n";
    cin>>name;

    v.push_back({roll,name});
}

cout<<"Display Data \n";

for(auto p:v)
{
    cout<<p.first<<"\t"<<p.second<<"\t";
}



}

