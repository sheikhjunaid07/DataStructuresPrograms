#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i = 2;
    while(i <= n-1)
    {
        if(n%i==0)
        {
            cout<<"Not Prime Number"<<endl;
            break;
        }
        else
        {
            cout<<"Prime Number"<<endl;
            break;
        }
        i++;
    }
}