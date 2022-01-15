#include<iostream>
using namespace std;

bool evenOdd(int x)
{
    if(x&1)
        return true;
    else    
        return false;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool ans = evenOdd(n);
    if(ans)
        cout<<"It's Odd Number"<<endl;
    else
        cout<<"It's Even Number"<<endl;
    return 0;
}