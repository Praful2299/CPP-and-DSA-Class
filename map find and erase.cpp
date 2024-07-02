#include<iostream>
using namespace std;
#include<map>

int main()
{
map <string,int>  mp;
     int n,age;
     string name,naam;

     cout<<"Enter number of records:\n";
     cin>>n;

     for(int i=0;i<n;i++)
     {
         cout<<"Enter ur name : \n";
         cin>>name;
         cout<<"Enter ur age : \n";
         cin>>age;

         mp.insert({name,age});
    }
     for(auto p:mp)
     {
         cout<<p.first<<"\t"<<p.second<<"\n";
     }

     cout<<"Enter name you want to erase: ";
     cin>>naam;
     int j= mp.erase(naam);
     if(j==1)
     {
         cout<<"Data Deleted Successfully";
     }
     else{
        cout<<"Data not found";
     }
     cout<<"After Deletion \n";
     for(auto p:mp)
     {
         cout<<p.first<<"\t"<<p.second<<"\n";
     }

}
