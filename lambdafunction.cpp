#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v{1,2,5,7,8,10};

    auto lambda=[&v](int a){     //capture pass--> static
        for(auto &i:v){
            i=i+a;
        }
    };

    lambda(5);                  //parameter could be anything

    for(auto i:v){
        cout<<i<<" ";
    }

}
