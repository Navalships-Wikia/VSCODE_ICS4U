#include <iostream>
using namespace std;

int main()
{
    cout<<endl;
    // Pointers in C++

    // int x, *p=&x;
    // int *y;
    // y=&x;

    // x=3;

    /*
    You have the ability to hold the address of a pointer in another pointer
    This is common notation in C++ for a 2 dimensional array
    int **a;
    a=&p;
    cout<<**a<<endl;
    */

    int x=3, y=21;
    int*p1, *p2=&y;

    p1=&x;
    cout<<*p1<<endl;
    cout<<*p2<<endl;

    cout<<"\n";

    *p1=*p2;
    *p2=7;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;

    cout<<endl;
    return 0;
}