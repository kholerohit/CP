#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<res;
            res += 1;
        }       
        cout<<endl;
    }
    return 0;
}