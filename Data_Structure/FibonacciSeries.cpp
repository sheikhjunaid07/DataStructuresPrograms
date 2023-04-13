#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int a = 0, b = 1;
    cout<<"Fibonacci Series is : "<<a<<" "<<b<<" ";
    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
        

    }
}