#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<string> v={"sonam","rahul","deepa"};
int size=v.size();

for(auto &i:v){
    i[0]=toupper(i[0]);    //string ke bhi indexing hoti he
    cout<<i<<endl;
}


for(auto i:v){
    cout<<i<<" ";
}

}
