#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" " ;
    }
    
}

int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[50];
    cout<<"Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse(arr, size);
    cout<<endl;
    printArray(arr,6);
    
    return 0;
}