//WAP A PROGRAM TO TAKE
//{"mom","dad","ww","okay"}
//output->{"mom","dad"" palindrome + size greater than 2

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> st{"mom","dad","ww","okay"};
    vector <string> test;

    for(int i=st.size()-1;i>=0;i--){
        test.push_back(st[i]);
    }


}



