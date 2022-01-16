#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;
    while(end >= start)
    {
        if(key == arr[mid])
            return mid;
        if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start)/2;
    } 
    return -1;
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
    int key;
    cout<<"Enter Key to Search in an array: ";
    cin>>key;

    int index = binarySearch(num, size, key);
    if(index != -1)
        cout<<key<<" is Present at Location : "<<index;
    else
        cout<<"Key is Not Present";
    return 0; 

}