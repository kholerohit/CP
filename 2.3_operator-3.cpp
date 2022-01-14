#include<iostream>
using namespace std;

int main()
{
    int a =0;
    int b = 0;
    bool bl; 
    
    cout<<"AND Operator Table:"<<endl;
    cout<<"---------------------------------"<<endl;
    a = 0; b = 0; bl = a && b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 0; b = 1; bl = a && b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 1; b = 0; bl = a && b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 1; b = 1; bl = a && b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"OR Operator Table:"<<endl;
    cout<<"---------------------------------"<<endl;
    
    a = 0; b = 0; bl = a || b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 0; b = 1; bl = a || b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 1; b = 0; bl = a || b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    a = 1; b = 1; bl = a || b;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;


}