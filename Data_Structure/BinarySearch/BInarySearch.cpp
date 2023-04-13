#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        //go to right side(when key is greater than mid element)
        if (key > arr[mid])
        {
            start = mid + 1;
        }else{  //left side when key is less than mid element
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[50];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key you want to search : ";
    cin>>key;

    int value = binarySearch(arr, size, key);

    cout<<"index of "<<key<<" is : "<<value<<endl;
    
}