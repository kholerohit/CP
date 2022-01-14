#include<iostream>
using namespace std;

int main()
{

    char ch;
    cout<<"Enter Char : ";
    cin>>ch;
    cout<<"Entered Character is : "<<ch<<endl;
    if(ch >= 65 &&  ch <= 90 )
    {
        cout<<"Its Uppercase"<<endl;
    }
    else if(ch >= 97 &&  ch <= 122 )
    {
        cout<<"Its LowerCase"<<endl;
    }
    else if(ch >= 48 &&  ch <= 57)
    {
        cout<<"Its Number"<<endl;
    }
}
