#include<iostream>
#include<vector>
using namespace std;

void move_zero(auto &v){
    int j=0;
    for(int i=0;i<v.size();i++){    //yeh loop se apan ne sari non-zero value ko left mein le aaye he.
        if(v[i]!=0){
            v[j]=v[i];
            j++;
        }
    }

        while(j<v.size()){           // is loop se last mein sari values ko 0 assign kr diya he.
        v[j]=0;
        j++;
    }

}

int main(){
    vector<int> v{1,0,12,0,4,35,0,1,0};
    move_zero(v);

    for(auto i:v){
        cout<<i<<" ";
    }

}
