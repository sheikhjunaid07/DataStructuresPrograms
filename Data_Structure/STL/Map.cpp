#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;

    //one way to inserting elements
    m[1] = "sheikh";
    m[2] = "junaid";
    m[10] = "indore";

    //another way to inserting elements
    m.insert({5,"parvez"});

    //print elements
    for(auto i : m)
    {
        //if you want to print only keys you can use
        //(i.first) but you want to print values you can use (i.second)
        //use first and second both to print key and values
        cout<<i.first<<" "<<i.second<<endl;
    }

    //to find element
    cout<<"Finding 10 (is 10 present or not) "<<m.count(10)<<endl;

    //to erase element
    m.erase(10);

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
