#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int a = 3;
    cout<<"Value of A inside Main: "<<a<<endl;
    if(a)
    {
        int a = 5;
        int b = 9;
        cout<<"Value of A inside If: "<<a<<endl;
        cout<<"Value of B inside If: "<<b<<endl;

    }
    //cout<<"Value of B inside Main: "<<b<<endl;
    return 0;
}