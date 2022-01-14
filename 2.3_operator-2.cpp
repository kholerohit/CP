// logical AND and OR


#include<iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
     
    bool bl = a && b;
    cout<<"Logical AND => return true if both num are ture"<<endl;
    cout<<a<<" && "<<b<<" => "<<bl<<endl;
    cout<<"----------------------------------------------"<<endl;

    bl = a || b;
    cout<<"Logical OR => return false if both num are false"<<endl;
    cout<<a<<" || "<<b<<" => "<<bl<<endl;
    cout<<"----------------------------------------------"<<endl;

    return 0;
}