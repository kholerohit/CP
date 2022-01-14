#include<iostream>
using namespace std;

int main()
{
    int temp;
    cout<<"Enter tempreture in Farenhate: ";
    cin>>temp; 
    float cel = 0;
    cel = 5*(temp-32)/9;

    cout<<"Tempreture in Celcious is: "<<cel<<" degree Celcious";
    return 0;
}