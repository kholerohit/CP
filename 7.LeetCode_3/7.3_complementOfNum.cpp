#include<iostream>
using namespace std;

int bitwiseComplement(int n)
{
    int mask = 0;
    int num = n;
    if(n ==0)
        return 1;
    while( n != 0)
    {
        mask = (mask << 1)|1;
        n = n >> 1;
    }
    int ans = (~num) & mask;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter Binary number: ";
    cin>>n;
    int com = bitwiseComplement(n);
    cout<<"Complement of Number : "<<com;
    return 0;
}