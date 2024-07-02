#include<iostream>
using namespace std;

namespace cybrom
{
    int a=100;    //here we have to declare and initialise at same time

    class bhopal
    {

    public:


            void show(){
                cout<<"welcome";
            }

    };
    namespace mp
    {

        int b=1000;
    }
}

int main(){
    cybrom::bhopal b1;
    b1.show();

}
