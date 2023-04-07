#include<iostream>
using namespace std;

int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;    
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denomenator = factorial(r) * factorial(n-r);

    return numerator/denomenator;

}

int main()
{
    int n, r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;

    cout<<"Answer is :"<< nCr(n,r) <<endl; 
    return 0;
}