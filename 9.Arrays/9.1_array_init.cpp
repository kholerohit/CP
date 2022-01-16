#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number to initialize array:";
    cin>>n;
    int numbers[20];
    for(int i = 0; i <= 20; i++)
        numbers[i] = n;
        
    cout<<"Array Initialized with given Number:"<<endl;
    for(int i = 0; i <= 20; i++)
    {
        cout<<numbers[i]<<"\t";
    }
    return 0;
}