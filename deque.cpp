#include<iostream>
using namespace std;
#include<queue>

int main()
{
    deque<int> q;
    q.push_front(10);
    q.push_front(20);
    q.push_front(30);
    q.push_front(40);
    q.push_front(50);

    cout<<"Size =" <<q.size()<<"\n";
    cout<<"Max-Size:" <<q.max_size()<<"\n";

    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q.pop_front();
    }
}
