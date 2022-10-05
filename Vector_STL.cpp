#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;

    cout<<"Element at 2nd Index"<<v.at(2)<<endl;

    cout<<"Front:"<<v.front()<<endl;
    cout<<"Back:"<<v.back()<<endl;

    cout<<"Before POP:"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<"Before Clear Size:"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size:"<<v.size()<<endl;
}