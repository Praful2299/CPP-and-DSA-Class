#include<iostream>
#include<vector>
using namespace std;

void add_element(vector <int> &v,int x){
    for(auto &i:v){
        i=i+x;
    }
}

int main(){
    int x;
    vector<int> v{2,3,4,55,6};

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Enter a number which want to be added in all element:";
    cin>>x;

    add_element(v,x);
     for(auto i:v){
        cout<<i<<" ";
    }


}

