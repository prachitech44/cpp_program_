#include<iostream>
using namespace std;

void myhandler()
{
    cout<<"inside new terminate handler"<<endl;
    abort();
}
int main()
{
    set_terminate(myhandler);
    try
    {
        cout<<"inside try block"<<endl;
        throw 100;

    }
    catch(double d)
    {
        cout<<"double catch"<<endl;
    }
    

}