#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //Creation of stack
    stack<int> S;

    //Push operation
    S.push(2);
    S.push(3);

    //Pop operation 
    S.pop();
        S.pop();


    cout<<"Printing top element "<<S.top()<<endl;
    if(S.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else {
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}