#include<iostream>
using namespace std;

int nthAP(int n)
{
    return 3*n + 7;
}

int main()
{
    int n;
    cout<<"Enter number in (3*n + 7) to get nth Term Of AP: ";
    cin>>n;
    int ans = nthAP(n);
    cout<<n<<" th term of  AP is "<<ans;
    return 0;
}