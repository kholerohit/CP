#include<iostream>
using namespace std;

int numOfSetBits(int n)
{
    int sum = 0;
    while( n !=0 )
    {
        sum = sum + (n&1);
        n = n >> 1;
    }
    return sum;
}
int main()
{
    int n1, n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter Second number: ";
    cin>>n2;
    int ans = numOfSetBits(n1) +  numOfSetBits(n2);
    cout<<"No of Set Bits in "<<n1<<" & "<<n2<<" : "<<ans<<endl;
    return 0;
}