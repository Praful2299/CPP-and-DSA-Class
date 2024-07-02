//WAP TO CREATE N RECORDS OF STUDENTS, AND DISPLAY THEM ALL.

#include<iostream>
#include<vector>
using namespace std;

int main(){
int n,roll;
string name;

cout<<"Ente no. of records:";
cin>>n;

vector<pair<int,string>> v;

for(int i=0;i<n;i++){
    cout<<"Enter roll no. and name :";
    cin>>roll>>name;
    v.push_back({roll,name});
}

for(auto i:v){
    cout<<"Roll no."<<i.first<<" Name:"<<i.second<<endl;
}

}
