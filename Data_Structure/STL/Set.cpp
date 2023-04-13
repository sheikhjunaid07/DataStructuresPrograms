#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    //for insert element
    s.insert(4);
    s.insert(9);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5); 
    s.insert(3);

    //for size
    cout<<"Size of set is : "<<s.size()<<endl;

    //for print set element
    for(int i : s)
    {
        cout<<i<<endl;
    }

    //for find element
    cout<<" 5 is present or not : "<<s.count(5)<<endl;
    
    //check is array is empty or not
    cout<<"Empty or not : "<<s.empty()<<endl;

    //for size of deque
    s.size();
}