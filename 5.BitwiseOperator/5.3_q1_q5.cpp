#include<iostream>
using namespace std;

int main()
{
    cout<<"Q1 answer >> "<<endl;
    int a, b = 1;
    a = 10;
    if(++a)
        cout<<b;
    else
        cout<<++b;

    cout<<"\n-----------------------"<<endl;
    cout<<"Q2 answer >> "<<endl;
    a = 1;
    b = 2;
    if(a--> 0 && ++b > 2)
        cout<<"Stage1 - Inside If"<<endl;
    else
        cout<<"Stage2 - Inside else"<<endl;
    
    cout<<"A: "<< a << "\tB:"<< b <<endl; 

    cout<<"-----------------------"<<endl;
    cout<<"Q3 answer >> "<<endl;
    int number = 3;
    cout<<(25*(++number))<<endl;

    cout<<"-----------------------"<<endl;
    cout<<"Q4 answer >> "<<endl;
    a = 1;
    b = a++;
    int c = ++a;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"-----------------------"<<endl;

    
    return 0;
}