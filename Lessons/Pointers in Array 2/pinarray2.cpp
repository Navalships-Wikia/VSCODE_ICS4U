#include <iostream>
using namespace std;

// ADDRESS MANIPULATION

int main()
{
    // Pointers and arrays are closely related but they are still a little different
    int a[]={9,8,7,6,5,4};
    char b[]="how are you";

    cout<<a<<endl; // This will show the address of the array
    cout<<b<<endl; // This will show the sentence (Exception)

    cout<<*(a+1)<<endl; // gives value of 8
    cout<<*(b+1)<<endl; // gives value of o

    cout<<endl;
    return 0;
}