#include<iostream>
#include<vector>
using namespace std;

int main(){
int flag=0;
    vector<string> v{"apple23","banana","orange71","pineapple"};
    vector<string> v1;


   for (auto i:v){
        flag=0;
        for (auto j:i){
                if(isdigit(j))
                flag=1;
                break;
            }

            if(flag==0){
                v1.push_back(i);
            }
            }
            for(auto i:v1){
                cout<<v1<<" ";
            }
        }

