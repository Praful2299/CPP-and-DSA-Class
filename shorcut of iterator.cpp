#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a1{11,22,33,44,55};
    array<int,5> a2{1,2,3,4,5};



    for(auto p=a1.begin();p!=a1.end();p++){  //here we have use auto keyword (auto keyword datatype dekhke automatically smjh leta he)
        cout<<*p<<" ";
    }
    cout<<endl;

     for(p=a2.begin();p!=a2.end();p++){
        cout<<*p<<" ";
    }
}
