//Question*8(delete element from given position)

/*#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){

    vector<int> v {12,24,5,4,5,85,4};

    for(auto a:v)
    {
        cout<<a<<"\t";
    }

    cout<<endl;

    v.erase(v.begin()+3);

    for(auto a:v)
    {
        cout<<a<<"\t";
    }
}*/

//question-7(counting number of duplicate elements)

/*#include<iostream>
#include<vector>
using namespace std;

void countelement(vector<int> &v)
{
    int n=v.size();
    int currentelement=v[0];
    int counts=1;

    for(int i=1;i<=n;i++)
    {
        if(v[i]==currentelement)
        {
            counts++;
        }
        else
        {
            cout<<currentelement<<"="<<counts<<endl;
            currentelement=v[i];
            counts=1;
        }
    }
}

int main()
{
vector<int> v{4, 4, 8, 8, 8, 15, 16, 23, 23, 53};

countelement(v);


}*/

//question-6(counting occurence of givewn value)

/*#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v{4, 4, 8, 8, 8, 15, 16, 23, 23, 42};

    int target,n=v.size(),counts=0;
    cout<<"Enter number:";
    cin>>target;

    for(int i=0;i<n;i++)
    {
        if(v[i]==target)
        {
            counts++;
        }
    }
    cout<<target<<"="<<counts;
}*/

//question-5(Incomplete)

/*#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v={0,1,0,1,0,2,1,2};



}*/


//question-4()

/*#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<int> v{0,1,0,1,0,2,1,2 };

    sort(v.begin(),v.end());

    for(auto i:v)
    {
        cout<<i<<"\t";
    }
}
*/


//question-3

#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v{14,21,6,7,8,3,9};
    vector<int> temp;
    int n=v.size();

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0){
            temp.push_back(v[i]);
                     }

   }


   for(auto a:temp)
   {
       cout<<a<<"\t";
   }
}
