#include <iostream>

using namespace std;

int x;
int y;

int age(){
    cout<<"Enter your age: ";
    cin>>x;
    return x;
}

int ageToMonths(){
    y=x*12;
    cout<<"Your age is: "<<y;
    return y;
}