#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n ; i++)
        fact *= i;
    return fact;
}

int nCr(int n, int r)
{
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main()
{
    int n, r;
    cout<<"Enter value of n in (nCr):";
    cin>>n;
    cout<<"Enter value of r in (nCr):";
    cin>>r;
    int ans = nCr(n, r);
    cout<<n<<"C"<<r<<" : "<<ans;
    return 0;
}