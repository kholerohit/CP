#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char ch = 65;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    return 0;
}