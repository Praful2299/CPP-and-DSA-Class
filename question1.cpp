#include<iostream>
#include<vector>
using namespace std;

void delete_element(vector <int> &v,int x){

    for(auto i=v.begin();i!=v.end();){
        if(*i==x){
            i=v.erase(i);
        }
        else{
            i++;
        }
    }

}

int main(){
    int x;
    vector <int> v{2,33,5,6,7,33,4,33,5,2};

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Enter np. you want to exclude:";
    cin>>x;


    delete_element(v,x);

      for(auto i:v){
        cout<<i<<" ";
    }


}
