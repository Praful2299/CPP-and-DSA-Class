#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Size=" << q.size() << "\n";

    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }

}
