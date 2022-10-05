#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n:"<<endl;
    for(int i:n) {
        cout<<i<<" ";
    } cout<<endl;
    l.push_back(1);
    

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<"After Erase:"<<endl;
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase:"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<"Size of list:"<<l.size()<<endl;
}