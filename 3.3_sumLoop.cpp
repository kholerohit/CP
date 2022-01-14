#include<iostream>
using namespace std;

int main()
{
    int n ;
    int sum=0;
    cout<<"Enter number:";
    cin>>n;

    int i = 0;
    while(i <= n)
    {
        cout<<i<<" ";
        sum += i;
        i += 1;
    }
    cout<<"\nsum from 1 to "<< n <<" is "<< sum; 
    return 0;
}