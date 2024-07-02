#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int,5>a={4,3,5,8,5};
    array<int,5>b;
    int k;
    int j=0;
    cout<<"Enter range 0-5:";
    cin>>k;
    for(int i=k+1;i<a.size();i++){
        a[i]=b[j];
        j++;
    }

    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
}
