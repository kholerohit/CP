#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    int ans = 1;
    for(int i = 0; i <= 30; i++)
    {
        if( ans == n)
            return 1;
        if(ans < INT32_MAX/2)
        ans *= 2;
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool res = isPowerOfTwo(n);
    if(res)
        cout<<"It's power of 2";
    else
        cout<<"It's not power of 2";
    return 0;
}