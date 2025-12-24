#include<iostream>
using namespace std;

void x(int test)
{
    cout<<"inside x test="<<test;
    if(test) throw test;
}

int main()
{
    cout<<"start"<<endl;
    try
    {
        cout<<"inside try block"<<endl;
        x(0);
        x(1);
        x(2);
    }

    catch(int i)
    {
        cout<<"caught exception"<<endl;
        cout<<i<<endl;
    }
}