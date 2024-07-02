#include<iostream>>
#include<tuple>
using namespace std;

int main()
{
    tuple<int,string,int>t{101,"Praful",24};

    cout<<get<0>(t)<<endl;
    cout<<get<1>(t)<<endl;
    cout<<get<2>(t);

}
