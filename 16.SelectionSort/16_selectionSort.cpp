#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
        cout<<"Swipe Between: "<<arr[i]<<"  "<<arr[minIndex]<<" | Modified ArraY:\t";
        for(int k = 0; k < size; k++)
            cout<<arr[k]<<" ";
        cout<<endl<<endl;
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
    int arr[50];
    cout<<"Enter size of an array:";
    cin>>size;
    inputArray(arr, size);
    selectionSort(arr, size);
    cout<<"Sorted Array (using selection Sort): "<<endl;
    printArray(arr, size);
    return 0;
}