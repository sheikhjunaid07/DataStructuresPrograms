#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    //queue me element insert krne ke liye
    q.push(2);
    q.push(4);
    q.push(6);

    //element remove krne ke lie
    q.pop();
    
    //to print first element
    cout<<"First element of queue is : "<<q.front()<<endl;

    //size of queue
    cout<<"Size of queue is : "<<q.size()<<endl;

    //check empty or not
    cout<<"Empty or not : "<<q.empty()<<endl;
} 