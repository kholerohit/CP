#include<iostream>
using namespace std;

int reverse(int x)
{
    int ans = 0;
    while( x != 0)
    {
        int digit = x % 10;
        if(ans < INT32_MAX/10)
            ans = (10*ans) + digit;
        x = x/10;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int re = reverse(n);
    cout<<"Reverse of Number is: "<<re<<endl;
    return 0;
}