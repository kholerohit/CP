#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i;  j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Output
// 1 
// 2 2 
// 3 3 3