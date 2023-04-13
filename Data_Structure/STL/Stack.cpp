#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    //stack me element insert krne ke liye
    s.push(2);
    s.push(4);
    s.push(6);

    //to find top element of stack
    cout<<"Top Element : "<<s.top()<<endl;

    //element remove krne ke lie
    //by default last ka element remove krta h
    s.pop();
    
    //size of stack
    cout<<"Size of stack is : "<<s.size()<<endl;

    //check empty or not
    cout<<"Empty or not : "<<s.empty()<<endl;
} 