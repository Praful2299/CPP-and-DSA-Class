#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v1={0,1,0,1,1,0};
int size=v1.size();

for(auto &i:v1){
    if(i==0){
        v1.push_back(i);

    }
    else{
        v1.insert(v1.begin(),i);
    }

    }

    for(auto a:v1)
    {
        cout<<a<<"\t";
    }
}


