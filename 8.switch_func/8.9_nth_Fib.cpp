#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1, next;
    if(n == 1)
        return 0;
    for(int i = 2; i <= n ; i++)
    {
            next = a + b;
            a = b;
            b = next; 
    } 
    return next;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans = fibonacci(n);
    cout<<n<<" th Fibonacci Number is : "<<ans<<endl;
    return 0;
}