#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,5,8,9,48,59,84,78};

    auto result=any_of(v.begin(),v.end(),[](int a){      // or we can directly write {return a%2==0}
                                if(a%2==0)
                                    return true;
                                else
                                    return false;
                       });
    cout<<result;
}
