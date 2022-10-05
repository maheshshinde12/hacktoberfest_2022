#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;

    q.push("Anuj");
    q.push("Rajendra");
    q.push("Mane");

    cout<<"Size Before Pop:"<<q.size()<<endl;

    cout<<"First Element:"<<q.front()<<endl;
    q.pop();

    cout<<"Size Before Pop:"<<q.size()<<endl;

    cout<<"Second Element:"<<q.front()<<endl;
    q.pop();
    cout<<"Third Element:"<<q.front()<<endl;
    cout<<"Size Before Pop:"<<q.size()<<endl;


}