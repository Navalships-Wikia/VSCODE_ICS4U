#include <iostream>

using namespace std;

int *point_to_value();

int main()
{
    // New and Delete

    int *p;
    p=point_to_value();

    cout<<*p<<endl;

    return 0;
}
int *point_to_value()
{
    int *a;
    a=new int(32); // bypass the local restriction
    return a;
}