#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //jb array size pta na ho
    vector<int> v;

    //jb array size pta ho
    vector<int> v1(5,1);  //array me 5 elements he or {sbko 1 se initialize kia he -> (output - 1 1 1 1 1)}
    
    //kitni memory allocate hui he (capacity check)
    cout<<"current Capacity is : "<<v.capacity()<<endl;

    // element insert krne ke liye
    v.push_back(1);
    cout<<"current Capacity is : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"current Capacity is : "<<v.capacity()<<endl;

    v.push_back(3);  //yaha capacity 4 ho gai he but size 3 he
    cout<<"current Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl;

    //get element by index number
    cout<<"Element at 1st index is : "<<v.at(1)<<endl;

    //check first and last element of an array 
    cout<<"First element of array is "<<v.front()<<" and last elemet of array is "<<v.back()<<endl;

    //last element remove krne le liye
    v.pop_back();

    //before clear size
    cout<<"Before clear size : "<<v.size()<<endl;

    //vector ko clean krne le liye
    //vector clean krne pr vector ki size clean hoti he capacity nhi hoti
    v.clear();
    
    //After clear size
    cout<<"After clear size : "<<v.size()<<endl;

}