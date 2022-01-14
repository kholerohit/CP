#include<iostream>
using namespace std;

int main()
{
    int x = 122;
    cout<< "Size of Int: "<<sizeof(x)<<" Byte "<<endl;

    char ch = 'a';
    cout<<"Size of Char :"<< sizeof(ch)<<" Byte"<<endl;

    float f = 3.14f;
    cout<<"Size of Float :"<<sizeof(f)<<" Byte"<<endl;

    double d = 1.3333454234;
    cout<<"Size of Double :"<<sizeof(d)<<" Byte"<<endl;

    unsigned int num =  123;
    cout<<"Size of Unsigned Int: "<<sizeof(num)<<" Byte"<<endl;

    bool b = 1;
    cout<<"Size of Boolean : "<< b<<" bit"<<endl;

    return 0;
}