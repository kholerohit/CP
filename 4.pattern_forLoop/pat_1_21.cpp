#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int res;
    for(int i = 1; i<= n; i++)
    {
        res =  i;
        for(int j = 1; j <=i ; j++)
        {
            cout<<res<<" ";
            res -= 1;
        }
        cout<<endl;
    }

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j <=i ; j++)
        {
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }


    return 0;
}