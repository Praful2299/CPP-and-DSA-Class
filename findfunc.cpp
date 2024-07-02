#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v{1,2,3,4,75,89,94};

    auto pos= find(v.begin(),v.end(),75);
    cout<<pos-v.begin();
}

