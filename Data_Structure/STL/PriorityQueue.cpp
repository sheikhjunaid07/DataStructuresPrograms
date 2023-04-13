#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //priority queue by default decreasing order me data
    //krta hai highest element sbse pehle hota he
    priority_queue<int> max;

    //increasing order me data store krne ke liye priority
    //queue to is tarah declare kiya jata hai
    priority_queue<int, vector<int>, greater<int> > min;

    //for insert element to an max priority queue
    max.push(1);
    max.push(5);
    max.push(8);
    max.push(3);
    max.push(6);

    //for size of priority queue
    cout<<"Size of Priority Queue is : "<<max.size()<<endl;
    
    //for print all elements
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<max.top();
        max.pop();
    }
    cout<<endl;

    //for insert element to an min priority queue
    min.push(1);
    min.push(5);
    min.push(8);
    min.push(3);
    min.push(6);

    //for size of priority queue
    cout<<"Size of Priority Queue is : "<<max.size()<<endl;
    
    //for print all elements
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<" "<<min.top();
        min.pop();
    }
    cout<<endl;

    //check empty or not
    cout<<"Empty or not : "<<max.empty()<<endl;
    cout<<"Empty or not : "<<min.empty()<<endl;
}