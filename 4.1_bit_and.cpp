#include<iostream>
using namespace std;

int main()
{   
    int a = 5;
    int b = 7;
    cout<<"Bitwise NOT"<<endl;
    cout<<"~"<<a<<" => "<<~a <<endl;

    cout<<"--------------------"<<endl;
    cout<<"Bitwise AND"<<endl;
    cout<<a<<" & "<<b<<" => "<<(a&b)<<endl;
    cout<<"--------------------"<<endl;;

    cout<<"Bitwise OR"<<endl;
    cout<<a<<" | "<<b<<" => "<<(a|b)<<endl;
    cout<<"--------------------"<<endl;;

    cout<<"Bitwise XOR"<<endl;
    cout<<a<<" ^ "<<b<<" => "<<(a^b)<<endl;
    cout<<"--------------------"<<endl;

    cout<<"Right Shift >>"<<endl;
    cout<<a<<" >> 2 => "<< (a>>2) <<endl;
    cout<<"--------------------"<<endl;

    cout<<"Left Shift"<<endl;
    cout<<a<<" << 2 => "<< (a<<2) <<endl;

    return 0;
}