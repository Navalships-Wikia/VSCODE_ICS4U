#include <iostream>
using namespace std;

int main()
{
    cout<<endl;
    // Pointers in C++

    // int *pointer=3; // This is an error because we are trying to assign a value to a pointer
    
    int x, *p=&x; // This is okay because we are assigning the address of x to the pointer p

    // The above only works at the first declaration of the pointer
    // If we want to assign the address of x to p after the declaration, we do the following:
    p=&x;

    int *y;
    y=&x;


    *p=3; // This is essentially x=3;, We can also do *y=3;, which is the same thing
    cout<<x<<endl;

    cout<<*p<<endl; 
    // we call this dereferencing, this will show the value of the address of the variable that 
    // is holding it

    cout<<*y<<endl; // This will be the same thing
    cout<<*&x<<endl; // Now this is getting complicated, but it is still essentially the same

    cout<<endl;
    return 0;
}