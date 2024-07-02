#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<string> names={"akash","chandan","pratyaksh","pranjal","rohit","Puneet"};
vector<string> v;
for(auto &i:names){
    if(i[0]=='p'||i[0]=='P'){
        v.push_back(i);
    }
}


for(auto i:v){
    cout<<i<<" ";
}

}
