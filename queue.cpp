#include<iostream>
using namespace std;

class node {
    public:
    int frwd,prev;
    int *arr;

    node(){
    frwd=-1;
    prev=-1;
    arr=new int[5];
    }

    void push(int d)
    {
        if(prev==4)
        {
            cout<<"Data Overflow";
        }
        prev++;
       if(frwd==-1)
       {
           frwd++;
       }
       arr[prev]=d;
    }

    void peek()
    {
        if(frwd<0 || frwd>prev)
        {
            cout<<"\n No Data \n";
        }
        else
        {
            cout<<"Top Data: "<<arr[frwd]<<"\n";
        }
    }

    void pop ()
    {
        if(frwd<0 || frwd>prev)
        {
            cout<<"\n No Data \n";
        }
        else
        {
            frwd++;
        }
    }

    void show(){

        while(frwd<=prev)
        {
            cout<<arr[frwd]<<"\n";
            frwd++;

        }
    }
};


int main()
{
    node h;
    h.push(10);
    h.push(20);
    h.push(30);
    h.push(40);

    h.peek();
    h.pop();
    h.peek();

    h.show();
}
