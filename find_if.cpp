#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v{1,5,9,661,481,781,2};

    auto result= find_if(v.begin(),v.end(),[](int a){    //usko jese hi element milega uski position return krega
                                return a%2==0;
                         });

        if(result==v.end())
            cout<<"value not found";
        else
            cout<<*result;

}
