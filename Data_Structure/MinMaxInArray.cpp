#include<iostream>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT32_MIN;   //integer's minimum value -2^31 = INT_MIN

    for (int  i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT32_MAX;   //integer's maximum value 2^31 = INT_MAX

    for (int  i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter the size of array : "  ;
    cin>>size;
    
    int num[100];
    cout<<"Enter Array Elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is : "<<getMax(num, size)<<endl;
    cout<<"Minimum value is : "<<getMin(num, size)<<endl;
    return 0;
}