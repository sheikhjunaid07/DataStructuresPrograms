#include<iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0)
        {
            if (arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
            j--;
        }
        arr[j+1] = temp;
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
    
    insertionSort(arr, size);
    cout<<endl;
    cout<<"Sorted array is : ";
    printArray(arr, size);

}