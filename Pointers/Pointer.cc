#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<a<<endl;           //returns value of a
    cout<<&a<<endl;          //returns address of a
    cout<<*aptr<<endl;       //returns value of a...........Dereferencing a pointer
    cout<<aptr<<endl;        //returns address of a
    return 0;

}
