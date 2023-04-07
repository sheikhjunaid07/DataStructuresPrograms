#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i <size; i= i+2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main()
{
    int even[6] = {65,76,34,56,26,84};
    int odd[5] = {98,46,54,32,19};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);

    printArray(even,6);
    cout<<endl;
    printArray(odd,5);
}