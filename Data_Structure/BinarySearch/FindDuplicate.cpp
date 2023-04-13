#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;

    //XOR all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    
    //XOR [from 1, n-1]
    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[50];
    cout<<"Enter Array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int element = findDuplicate(arr, size);
    cout<<"Duplicate element of an array is : "<<element<<endl;
}