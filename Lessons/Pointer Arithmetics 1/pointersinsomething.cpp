#include <iostream>
using namespace std;

// Pointer Arithmetic

// Pass array into the function as pointers
// return as a pointer
// new and delete

int main()
{
    int *p;
    int a[]={3,16,5,1,2,3,7};
    int *q=a+6;
    // Pointer arithmetic is closely tied to the array

    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;

    // Pointer arithmetic is done by adding or subtracting
    // The pointer will point to the correct content of the array
    p=a; // p=&q[0]

    cout<<p+1<<endl; // &a[1]
    cout<<*p<<endl; // a[0]
    cout<<*(p+1)<<endl; // a[1]

    p=p+1;

    cout<<*p<<endl; // a[1], 16
    cout<<*(p-1)<<endl; // a[0], 3
    cout<<p[0]<<endl; // a[1], 16

    cout<<*q<<endl; // a[6], 7
    cout<<*q-*p<<endl; // 7 - 16 = -9
    cout<<q-p<<endl; // 6 - 1 = 5

    return 0;
}