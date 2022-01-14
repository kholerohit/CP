#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a Number: ";
    cin>>i;
    cout<<"\nValue of I : "<< i <<endl<<endl;

    cout<<"Post Increment (i++) : "<<i++<<endl;
    cout<<"Pre Increment (++i)  : "<<++i<<endl;

    cout<<"Post Decrement (i--) : "<<i--<<endl;
    cout<<"Pre Decrement (--i)  : "<<--i<<endl;
    
    return 0;
}