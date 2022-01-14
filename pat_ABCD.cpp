#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char ch = 65;

    for( int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    return 0;
}

// Output
// Enter number: 4
// A B C D 
// E F G H 
// I J K L 
// M N O P 