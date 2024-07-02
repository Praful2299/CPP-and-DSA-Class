#include<iostream>
#include<vector>
using namespace std;

void print(auto v){
cout<<"Size of vector:"<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
vector <int> v{2,3,44,8};


print(v);
}

