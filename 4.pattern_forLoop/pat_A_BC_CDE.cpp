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
            char ch = 65 + i + j - 2;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
    return 0;
}

// Output
// Enter number: 4
// A 
// B C 
// C D E 
// D E F G 