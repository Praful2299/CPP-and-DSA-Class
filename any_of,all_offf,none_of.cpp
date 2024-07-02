#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool even(int n){
    if(n%2==0)
        return true;
    else
        return false;
}

//syntax->
//any_of(strating_pos,ending_pos,function_reference) --->return boolean value
//all_of(strating_pos,ending_pos,function_reference) ---> return boolean value
//none_of(strating_pos,ending_pos,function_reference)  --> return boolean value

//find_if(strating_pos,ending_pos,function_reference)---->return-->iterator
    //first true --> return position
    //if search fails-->reutrn end().



int main(){

    vector<int> v{22,36,59,81,24};

    auto result=any_of(v.begin(),v.end(),even);     //koi ek bhi true rahega toh 1 return krdega
    cout<<result<<endl;

    auto result1=all_of(v.begin(),v.end(),even);    // sab true rahega toh hi 1 return krega warna 0 return karega
    cout<<result1<<endl;

    auto result2=none_of(v.begin(),v.end(),even);   //jab ek bhi element true nhi rhega tb true return krega
    cout<<result2;
}
