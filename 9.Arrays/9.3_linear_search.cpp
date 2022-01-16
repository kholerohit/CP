#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    bool found;
    for(int i = 0; i < size; i++)
        if(arr[i] == key)
            found = 1;
    return found;
}

int main()
{
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;
    int num[20];
    cout<<"Enter Element of an array :";
    for(int i = 0; i < size; i++)
        cin>>num[i];
    
    int key;
    cout<<"Enter Key to Search in an array: ";
    cin>>key;

    bool found = linearSearch(num, size, key);
    if(found)
        cout<<"Key Present";
    else
        cout<<"Key Not Present";
    return 0;
}