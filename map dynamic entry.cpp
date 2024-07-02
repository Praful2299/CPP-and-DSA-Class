 #include<iostream>
 using namespace std;
 #include<map>

 int main()
 {
     map <string,int>  mp;       // it automatically sort it in ascending order if we want it in descending order we use greater
     int n,age;
     string name;

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

 }
