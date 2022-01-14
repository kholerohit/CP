#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            char ch = 65 + n - i + j - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Output
// Enter number: 4
// D 
// C D 
// B C D 
// A B C D 