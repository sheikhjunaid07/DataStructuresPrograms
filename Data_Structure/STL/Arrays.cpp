#include<iostream>
#include<array>
using namespace std;

int main()
{
    //basic way to create array
    int basic[] = {1,2,3}; 

    //using STL
    array<int,4> a = {1,2,3,4}; 

    //size of array
    int size = a.size();
    cout<<size<<endl;

    //print array
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }

    //get element by index number
    cout<<"Element at 2nd index is : "<<a.at(2)<<endl;

    //check is array is empty or not
    cout<<"Empty or not : "<<a.empty()<<endl;

    //check first and last element of an array 
    cout<<"First element of array is "<<a.front()<<" and last elemet of array is "<<a.back()<<endl;

    
}