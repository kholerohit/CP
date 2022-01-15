#include<iostream>
using namespace std;

bool isPrime(int x)
{
    for(int i = 2; i < x; i++)
    {
        if(x%i == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool ans = isPrime(n);
    if(ans)
        cout<<n<<" is not Prime Number"<<endl;
    else  
        cout<<n<<" is Prime Nmber"<<endl;
    return 0;
}