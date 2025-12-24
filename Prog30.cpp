//Prachi
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    ofstream fout("A.txt");
        cout<<"enter a no."<<endl;
        cin >> n;
        fout << n;
        fout.close();
}