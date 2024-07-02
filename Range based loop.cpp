#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a1{11,22,33,44,55};
    array<int,5> a2{1,2,3,4,5};
     array<int,5> :: iterator p;


   for(auto i:a1){
    cout<<i<<" ";
   }
    cout<<endl;

     for(auto i:a2){
        cout<<i<<" ";
     }
}
