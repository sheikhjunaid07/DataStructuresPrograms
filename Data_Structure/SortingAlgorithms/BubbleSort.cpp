#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)  //for round 1 to size-1
    {
        for (int j = 0; j < (size-i); j++) //for process all element till(n-1)th index
        {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
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
    
    bubbleSort(arr, size);
    cout<<endl;

    cout<<"Sorted Array is : ";
    printArray(arr, size);
}