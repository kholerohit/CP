#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0, j = size-1;
    while(i<=j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void inputArray(int arr[], int size)
{
    cout<<"Enter Element of an Array:";
    for(int i = 0; i < size; i++)
            cin>> arr[i];
}
int main()
{
    int size;
    int numbers[20];
    cout<<"Enter size of an Array: ";
    cin>>size;
    inputArray(numbers, size);
    cout<<"Reverse of an Array:"<<endl;
    reverseArray(numbers, size);
    printArray(numbers, size);
    
    return 0;
}