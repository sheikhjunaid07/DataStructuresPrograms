#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        } 
    }
    return 0;
}

int main()
{
    int arr[10] = {12,54,236,77,26,24,456,75,45,10};

    int key;
    cout<<"Enter the key you want to search : ";
    cin>>key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout<<"Key is Present."<<endl;
    }else{
        cout<<"Key is Absent!!"<<endl;
    }
    
    return 0;
}