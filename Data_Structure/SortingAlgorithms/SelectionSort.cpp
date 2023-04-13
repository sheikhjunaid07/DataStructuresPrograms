#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < (size-1); i++)
    {
        int minIndex = i;
        for (int  j = (i+1); j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
    selectionSort(arr, size);
    
    cout<<endl;
    cout<<"Sorted array is : ";
    printArray(arr,size);
}