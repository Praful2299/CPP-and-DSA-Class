#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,2,3,5,6};
    v.insert(v.begin()+3,4);

    for(auto i:v){
        cout<<i<<" ";
    }
}
