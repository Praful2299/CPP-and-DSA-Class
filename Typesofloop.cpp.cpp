#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
vector<int> v1{1,2,3,4,5};
int sum=0;
//traditional loop

for(int i=0;i<v1.size();i++){
    sum=sum+v1[i];
}
cout<<sum<<endl;
sum=0;
vector<int> :: iterator it;
vector<double> d1{1.5,1.8,2.8,6.4,48};
vector<int> v2{1,23,4,5,6,8,7,89,8,5,65,56};

//it->d1 ko iterate nhi kr skta kyonki woh double type ka he aur apna iterator int type ka he-->NO
//it->v1,v2  -->Yes

for(it=v1.begin();it!=v1.end();it++){
    sum=sum+*it;
}
cout<<sum<<endl;
sum=0;

//Range based loop

for(auto i:v1){
    sum=sum+i;
    cout<<sum;
}


}
