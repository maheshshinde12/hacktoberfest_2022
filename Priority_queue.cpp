#include<iostream>
#include<queue>
using namespace std;
int main() {
    //Max Heap
    priority_queue<int> maxi;

    //Min Heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(6);
    maxi.push(8);
    maxi.push(9);
    mini.pop();
    mini.pop();

    cout<<"Size:"<<maxi.size()<<endl;
    int n = maxi.size();

    for(int i=0;i<n;i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    } cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.pop();
    mini.pop();

    int m = mini.size();
    for(int i=0;i<m;i++) {
        cout<<mini.top()<<" ";
        mini.top();
    }cout<<endl;

    cout<<"Empty:"<<mini.empty()<<endl;
}