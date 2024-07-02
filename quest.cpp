#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){

 vector <int> v;
int sum=0;
cout<<"Enter numbers:";
while(v.size()<10 &&sum<=100){
    int num;
    cin>>num;

    if(sum+num<=100){
        v.push_back(num);
        sum=sum+num;
    }
    else{
        int remaining=100-sum;
        v.push_back(remaining);
        sum=100;
        break;
    }

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}
