#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<string> v{"apple23","banana","orange71","pineapple"};
    vector<string> v1;

    auto result=find_if(v.begin(),v.end(),[](string a){
                        int flag=0;
                       for(auto i:a){
                            isdigit(i);
                            flag=1;
                            break;

                        if(flag==0){
                            v1.push_back(*result);
                        }
            });
            for(auto i:v1){
                cout<<v1<<" ";
            }

}
