#include<iostream>>
using namespace std;
#include<unordered_map>
#include<string>

int romanToInt(string s)
{
    unordered_map<char,int> roman={
         {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int result=0;
    int prev_value=0;

    for(int i=s.size();i>=0;--i)
    {
        int current_value=roman[s[i]];
        if(current_value<prev_value)
        {
            result=result-current_value;
        }
        else
        {
            result=result+current_value;
        }
        prev_value=current_value;
    }
    return result;
}

int main()
{
    string s;
    cout<<"Enter Roman Value to Convert it into Integer :\n";
    cin>>s;
    cout<<"\nResult :"<<romanToInt(s);

}
