#include<iostream>
#include<array>
using namespace std;

//Note-> In array,vector,string we have indexing because element can store at contiguous memory so we can easily iterate with the help of index,
//but in set or map there is no indexing, so we have to use stl iterator there.


int main(){
    array<int,5> a1{11,22,33,44,55};
    array<int,5> a2{1,2,3,4,5};

    array<int,5> :: iterator p; //iterator declaration

    for(p=a1.begin();p!=a1.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
     for(p=a2.begin();p!=a2.end();p++){
        cout<<*p<<" ";
    }
}
