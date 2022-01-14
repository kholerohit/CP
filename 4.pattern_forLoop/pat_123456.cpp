#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        //result = 1;
        for(int j = 1; j <= n; j++)
        {
            cout<<result<<" ";
            result += 1;
        }
        cout<<endl;
    }
    return 0;

}

// Output
// 1 2 3 
// 4 5 6 
// 7 8 9 