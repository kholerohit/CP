#include<iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT32_MIN;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT32_MAX;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter number: ";
    cin>>size;
    cout<<"Enter "<<size<<" Element of an array: "; 

    int num[100];
    //takeing input in is_array
    for(int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"Max Element of an array: "<<getMax(num, size)<<endl;
    cout<<"Min Element of an array: "<<getMin(num, size)<<endl;

    return 0;
}