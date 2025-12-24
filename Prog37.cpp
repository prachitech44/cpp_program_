#include <iostream>
using namespace std;

class base
{
    protected:
        int val;
    
    public:
        void set_val(int i)
        {
            val=i;
        } 
        
    virtual void show()=0;    
};

class derived1:public base
{
    public:
        void show()
        {
            cout<<val<<endl;
        }
};

class derived2:public base
{
    public:
        void show()
        {
            cout<<val<<endl;
        }
};

int main()
{
    derived1 d1;
    derived2 d2;
    d1.set_val(20);
    d1.show();
    d2.set_val(30);
    d2.show();
}