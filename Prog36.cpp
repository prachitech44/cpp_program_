#include<iostream>
using namespace std;

class base
{
    public:
       virtual void v_fun()
       {
        cout<<"base v_fun"<<endl;
       }
};

class derived1:public base
{
    public:
       void v_fun()
       {
        cout<<"derived1 v_fun"<<endl;
       }
};

class derived2:public base
{
    public:

};

int main()
{
    base* P,b;
    derived1 d1;
    derived2 d2;
    P=&b;
    P->v_fun();
    P=&d1;
    P->v_fun();
    P=&d2;
    P->v_fun();
    
}