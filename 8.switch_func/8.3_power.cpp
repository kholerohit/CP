#include<iostream>
using namespace std;
int power(int x, int n)
{
    int sum = 1;
    for(int i = 0; i < n; i++)
        sum = sum * x;
    return sum;
}

int main()
{
    int n, x;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>n;
    int ans = power(x, n);
    cout<<x<<" to Power "<<n<<" :"<<ans;

    return 0;
}