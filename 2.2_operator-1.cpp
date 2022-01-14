#include<iostream>
using namespace std;

int main()
{
    bool test1;
    int a = 3;
    int b = 8;

    cout<<"Value of A: "<<a<<endl;
    cout<<"Value of B: "<<b<<endl;
    cout<<"---------------------------"<<endl;

    test1 = a == b;
    cout<<a<<" == "<<b<<" => "<<test1<<endl;

    test1 = a > b;
    cout<<a<<" >  "<<b<<" => "<<test1<<endl;

    test1 = a > b;
    cout<<a<<" >  "<<b<<" => "<<test1<<endl;

    
    test1 = a >= b;
    cout<<a<<" >= "<<b<<" => "<<test1<<endl;

    test1 = a <= b;
    cout<<a<<" <= "<<b<<" => "<<test1<<endl;

}