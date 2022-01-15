
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter an Amount:";
    cin>>n;
    int num = 0;
    if( n<= 0)
    {
        cout<<"Invalid Amount"<<endl;
        exit(0);     
    }

    switch(2000)
    {
        case 2000:
                    num = n/2000;
                    n = n - (num*2000);
                    if(num)
                        cout<<"no Of 2000 notes: "<<num<<endl;
        case 500:
                    num = n/500;
                    n = n - (num*500);
                    if(num)
                        cout<<"No Of 500 notes: "<<num<<endl;
        case 200:
                    num = n/200;
                    n = n - (num*200);
                    if(num)                        
                        cout<<"No Of 200 notes: "<<num<<endl;
        case 100:
                    num = n/100;
                    n = n - (num*100);
                    if(num)
                        cout<<"No Of 100 notes: "<<num<<endl;
        case 50:
                    num = n/50;
                    n = n - (num*50);
                    if(num)
                        cout<<"No Of 50 notes: "<<num<<endl;
        case 20:
                    num = n/20;
                    n = n - (num*20);
                    if(num)
                        cout<<"No Of 2  0 notes: "<<num<<endl;
        case 10:
                    num = n/10;
                    n = n - (num*10);
                    cout<<"No Of 10 notes: "<<num<<endl;
        case 5:
                    num = n/5;
                    n = n - (num*5);
                    if(num)
                        cout<<"No Of 5 notes: "<<num<<endl;
        case 2:
                    num = n/2;
                    n = n - (num*2);
                    if(num)
                        cout<<"No Of 2 notes: "<<num<<endl;
        case 1:
                    num = n/1;
                    n = n - (num*1);
                    if(num)
                        cout<<"No Of 1 notes: "<<num<<endl;
                    break;
        default:
                    cout<<"Invalid Amount";
        
    }

    return 0;
}