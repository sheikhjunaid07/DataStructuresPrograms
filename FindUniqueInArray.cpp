#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        //using XOR Operator
        ans = ans^arr[i];
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

    int element = findUnique(arr, size);
    cout<<"Unique element of an array is : "<<element<<endl;
}