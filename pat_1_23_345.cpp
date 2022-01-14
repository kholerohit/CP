#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int result;
    for(int i = 1; i <= n; i++)
    {
        result = i;
        for(int j = 1; j <= i; j++)
        {
            cout<<i+j-1<<" ";
            result += 1;
        }
        cout<<endl;     
    }
    return 0;
}

// Output
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7