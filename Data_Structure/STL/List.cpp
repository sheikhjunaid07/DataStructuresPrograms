#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    
    //statig me element insert krne ke liye
    l.push_front(2);  

    //ending me element insert krne ke liye
    l.push_back(1);

    for(int i : l)
    {
        cout<<i<<" ";
    }

    //last se element nikalne krne ke liye
    l.pop_back();

    //starting me se element nikalne krne ke liye
    l.pop_front();
    
    //check first and last element of an array 
    cout<<"First element of array is "<<l.front()<<" and last elemet of array is "<<l.back()<<endl;
    
    //check is array is empty or not
    cout<<"Empty or not : "<<l.empty()<<endl;

    //for size of list
    l.size();

    // elements ko delete krne ke liye
    l.erase(l.begin());
}