#include<iostream>
using namespace std;

template <typename T>

class A
{
    private:
        T* ptr;
        int size;

    public:
        A(T arr[],int S);
        void print();    
};

template <typename T>
A<T>::A(T arr[],int S)
{
    ptr=new T[S];
    size= S;
    for(int i=0;i<size;i++)
       ptr[i]=arr[i];
}
template <typename T>
void A<T>::print()
{
    for(int i=0;i<size;i++)
    cout<<*(ptr+i)<<endl;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    A<int>  a(arr,5);
    a.print();
}