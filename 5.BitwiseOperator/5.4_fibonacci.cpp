#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<" Enter a Number: ";
    cin>>n;

    int a = 0;
    int b = 1;
    int next;

    if(n == 1)
        cout<<a;
    else if (n >= 2)
        cout<<a<<" "<<b;

    for(int i = 1; i <= n -2; i++)
    {   
        next = a + b;
        a = b;
        b = next;
        cout<<" "<<next;
    }
    return 0; 
}