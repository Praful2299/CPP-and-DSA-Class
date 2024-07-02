//Lambda Expression/Function->It is a special function which defined at the same place where we actually call them.
//Lambda function is also called anonymous function (but may have some reference where it is needful)

//Syntax:-  [](){};
//[]->capture(reference)
//()->Here we define parameter is required
//{}-> Body define

#include<iostream>
using namespace std;

int main(){

    auto p=[](int a,int b){
        if(a>b)
            return a;
        else
            return b;
    };

    cout<<p(23,45);

}
