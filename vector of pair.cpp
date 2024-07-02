#include<iostream>
using namespace std;

int main(){
         pair<int,string> p1{101,"Praful"};
         cout<<"Rollno: "<<p1.first<<" Name:"<<p1.second<<endl;  //p1=pair object

        pair<string,string> p2;
        p2=make_pair("Praful","Shrivastava");
        cout<<"Name: "<<p2.first<<" Last Name:"<<p2.second<<endl;

        p2={"Praful","Shrivastava"};
        cout<<"Name: "<<p2.first<<" Last Name:"<<p2.second;

}
