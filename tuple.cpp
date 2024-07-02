#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){
    tuple<int,int,string> t1;
    t1=make_tuple(101,48,"Praful");

    cout<<get<0>(t1)<<endl;
}
