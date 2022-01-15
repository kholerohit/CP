#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;
    int b = 0;
    cout<<"Enter first Number: ";
    cin>>a;
    cout<<"Enter second Number: ";
    cin>>b;
    char ch;
    cout<<"Enter Operation +, -, *, /, % : ";
    cin>>ch;
    switch(ch)
    {
        case '+':
                cout<<a<<" + "<<b<<" = "<< a + b;
                break;
        case '-':
                cout<<a<<" - "<<b<<" = "<< a - b;
                break;
        case '*':
                cout<<a<<" * "<<b<<" = "<< a * b;
                break;
        case '/':
                cout<<a<<" / "<<b<<" / "<< a / b;
                break;
        case '%':
                cout<<a<<" % "<<b<<" = "<< a % b;
                break;
        default:
                cout<<"Please enter valid Operation: ";
    }
    return 0;
}