#include <iostream>
using namespace std;

int main()
{
    cout<<endl;
    // Pointers in C++

    // REVIEW:
    // The below is a variable that stores an integer value
    int x;
    x=3; // x is assigned the value of 3

    cout<<x<<endl; // This outputs the value of x
    cout<<&x<<endl; // This outputs the address of x

    // POINTERS
    // A pointer is a variable that stores the address of another variable instead of the value
    // We can only store the address of a variable of the same integer type
    int *y;

    // char letter;
    // y=&letter; // This is an error because y is an integer pointer and letter is a character variable
 
    y=&x; // This y pointer is assigned the address of x
    cout<<y<<endl; // This outputs the address of x

    // CONFUSION NO. 1
    // The output below will actually be the address of y and not x
    // This is the address of the pointer itself
    cout<<&y<<endl;

    cout<<endl;
    return 0;
}