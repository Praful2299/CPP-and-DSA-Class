#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){
    int n,rn;
    double phy,chem,maths;
    string name;
    cout<<"Enter npo. of record you want to insert:";
    cin>>n;

    vector<tuple<string,int,double,double,double>> v;

    for(int i=0;i<n;i++){
        cout<<"Enter name,rollno.,Phy,Chem,Maths(Respectively):";
        cin>>name>>rn>>phy>>chem>>maths;
        v.push_back({name,rn,phy,chem,maths});
    }

    for(auto i:v){
        cout<<"Name:"<<get<0>(i)<<" .";
        cout<<"Rollno.:"<<get<1>(i)<<",";
        cout<<"Phy marks.:"<<get<2>(i)<<",";
        cout<<"Chem Marks.:"<<get<3>(i)<<",";
        cout<<"Maths Marks.:"<<get<4>(i)<<",";
        cout<<endl;
    }


}
