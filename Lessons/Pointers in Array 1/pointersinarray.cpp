#include <iostream>
using namespace std;

// POINTERS AND ARRAY
// POINTERS AND ARITHMETIC

int main()
{
    // Pointers and arrays are closely related but they are still a little different
    int a[]={9,8,7,6,5,4};
    int x=3;

    cout<<&x<<endl; 
    // This will show the address of x

    // What is the address of the array?
    cout<<&a<<endl; // This will show the address of the array
    cout<<&a[0]<<endl; // This will show the address of a[0]
    // C++ will use the address of the first element to represent the entire array

    cout<<"behold!!"<<endl;
    cout<<&a+1<<endl; // Address after the array
    cout<<a[1]<<endl; // Address of a[1]
    cout<<a+1<<endl; // Similar to &a[1]
    cout<<a<<endl; // Similar to &a[0]

    cout<<endl;
    return 0;
}