#include <iostream>

using namespace std;

int *last_element(int *a, int length);

int main()
{
    // 1. Return pointer
    int b[1,2,3,4,5,6];
    int size=sizeof(b)/sizeof(b[0]);
    // int *p=&b[size-1]; At Initialization

    int *p;
    // p=&b[size-1];
    // p=b+size-1;
    
    p=last_element(b, size);

    // The last element of the array is:
    cout<<*p;
    return 0;
}

int *last_element(int *a, int length)
{
    // return &a[length-1];
    return a+length-1;
}