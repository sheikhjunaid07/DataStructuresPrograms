#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    
    //statig me element insert krne ke liye
    d.push_front(2);  

    //ending me element insert krne ke liye
    d.push_back(1);

    for(int i : d)
    {
        cout<<i<<" ";
    }

    //last se element remove krne ke liye
    d.pop_back();

    //starting me se element remove krne ke liye
    d.pop_front();

    //get element by index number
    cout<<"Element at 1st index is : "<<d.at(1)<<endl;

    //check first and last element of an array 
    cout<<"First element of array is "<<d.front()<<" and last elemet of array is "<<d.back()<<endl;
    
    //check is array is empty or not
    cout<<"Empty or not : "<<d.empty()<<endl;

    //for size of deque
    d.size();

    // elements ko delete krne ke liye
    //isme index no. dena hoata he ki kaha se kaha tk elements delete krne he
    d.erase(d.begin(), d.begin()+1);
}