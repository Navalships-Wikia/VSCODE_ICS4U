#include <iostream>
#define size (sizeof(a)/sizeof(a[0]))
using namespace std;

// ADDRESS MANIPULATION

int main()
{
    // Pointers and arrays are closely related but they are still a little different
    int a[]={9,8,7,6,5,4};
    char b[]="how are you";

    int *p;
    p=a; // this will point to the first element of the array

    cout<<*a<<endl;
    cout<<*p<<endl;
    cout<<a[0]<<endl;
    cout<<p[0]<<endl;
    // All of these will give the same output, value of 9
    // Pointers can use array notation and vice versa

    cout<<*(a+1)<<endl; // a[1]
    cout<<*(p+1)<<endl; // p[1]

    p=p+1; // p++
    cout<<*p<<endl;
    cout<<p[0]<<endl;
    
    cout<<"-------------------"<<endl;
    for (p=a; p<a+size; p++) // Included on TEST 3
    {
        cout<<*p<<endl;
    }

    // a=a+1; // This will give an error because arrays are not pointers

    cout<<endl;
    return 0;
}