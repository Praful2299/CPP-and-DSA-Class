#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<pair<int,string>>v={{101,"Praful"},{102,"Kushagra"},{103,"Puneet"}};

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<"\t"<<v[i].second<<"\t";
    }
}
