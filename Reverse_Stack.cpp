#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str = "Anuj";
    stack<char>s;//Declaring char

    for(int i=0;i<str.length();i++) 
    //initialliization: 0; condition: 0<4; Increment++
    {
        char ch = str[i];
        //New Datatype: AND New Variable ch= str[i] str= A,n,u,j
        s.push(ch);
        //s.push(ch):: Going into stack And follows a Lifo order A,n,u,j 
    }
    string ans = "";
    //Declaring New Datatype: AND New Variable

    while(!s.empty())
    //while(Upto empty)
    {
        char ch = s.top();
        //char ch = Taking Top element A,n,u,j || j is the top element
        ans.push_back(ch);
        //calling ans for the ans = ans.push_back::: j and remove from pop  operation :::::::::::::Repeat the operation
        s.pop();
        //Remove j , u, n, A
    }
    cout<<"Answer is: "<<ans<<endl;
    //Getting the ans of this question
    return 0;
}