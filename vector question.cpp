#include<iostream>
#include<vector>
using namespace std;

void sqaure_add(auto &v){      //we have to pass mpercent or v will be of size 4
    int vec_size=v.size();
    for(int i=0;i<vec_size;i++){
        v.push_back(v[i]*v[i]);
    }
    for(auto i:v){
        cout<<i<<" ";
            }
            cout<<endl;
}
void print(auto v){
cout<<"Size of vector:"<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

vector <int> v{2,3,44,5};
sqaure_add(v);
print(v);

}
