#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Creation of queue with using STL
    queue<int> q;

    q.push(11);
    cout << "Front of q is:" << q.front() << endl;
    q.push(15);
    cout << "Front of q is:" << q.front() << endl;
    q.push(19);
    cout << "Front of q is:" << q.front() << endl;
    cout << "Back of q is:" << q.back() << endl;
    cout << "Size of queue is:" << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    cout << "Size of queue is:" << q.size() << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}