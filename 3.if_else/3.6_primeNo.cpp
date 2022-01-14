#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter positive number: ";
    cin>>n;
    int i = 0;
    bool result;
    for(i = 2; i < n ; i++)
    {
        if(n%i == 0)
        {
            result = 1;
            break;
        }
    }
    if(result)
    {
        cout<<n<<" is NOT a Prime Number"<<endl;
    }
    else
    {
        cout<<n<<" is a Prime Number";
    }
    return 0;
}