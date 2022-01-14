#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int i = 0;
    int sum = 0;

    cout<<"Enter a Number:";
    cin>>n;

    while(n != 0)
    {
        int bit = n & 1;
        sum = sum + (bit * pow(10, i));
        cout<<sum<<endl;
        n = n >> 1;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}