#include<iostream>
#include<vector>
#include<numeric>
using namespace std;



int main(){
    int sum=0;
vector<int> v{1,2,3,4,5};

for(auto &i:v){
    i=i+100;
    cout<<i<<" ";
}
cout<<endl;
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;

sum=accumulate(v.begin(),v.end(),0);
cout<<sum;

}

