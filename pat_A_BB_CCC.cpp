#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            char ch = 65 + i - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Output
// Enter number: 6
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// F F F F F F