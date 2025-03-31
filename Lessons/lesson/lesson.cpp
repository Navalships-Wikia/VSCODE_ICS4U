#include <iostream>

using namespace std;

int *point_to_value();

int main()
{
    // New and Delete
    
    // int *p;
    // p=new int(5);
    // cout<<*p<<endl;

    int *p;
    p=point_to_value();

    cout<<*p<<endl;

    return 0;
}
int *point_to_value()
{
    int x=32;
    return &x;
}