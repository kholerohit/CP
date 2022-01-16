#include<iostream>
using namespace std;

void alternative_reverse(int arr[], int size)
{
    for(int i = 0; i < size; i += 2)
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void inputArray(int arr[], int size)
{
    cout<<"Enter Element of an array :";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
}

int main()
{
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[20];
    inputArray(num, size);
    alternative_reverse(num, size);
    printArray(num, size);
    return 0;
}