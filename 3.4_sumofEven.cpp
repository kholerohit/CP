#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter number : ";
    cin>>n;
    int i = 0; 
    int sum = 0;
    for(i=0; i<=n; i++)
    {
        if(i % 2 == 0 )
        {
            sum += i;
        }
    }  
    cout<<"SUm form 1 to "<<n<<" is "<<sum;
    return 0;
}