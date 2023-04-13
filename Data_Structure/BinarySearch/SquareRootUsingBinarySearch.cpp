#include<iostream>
using namespace std;

int squareRoot(int n)
{
    int start = 0;
    int end  = n;
    int mid = start + (end - start)/2;

    int ans = -1;
    while (start < end)
    {
        int square = mid * mid;
        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2; 
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter the number for square root : ";
    cin>>num;
    int element = squareRoot(num);
    cout<<"Square root of "<<num << " is : "<<element<<endl;
}