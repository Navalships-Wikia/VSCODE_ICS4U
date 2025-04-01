#include <iostream>
using namespace std;

int main()
{
    int *p, x;
    p=&x;
    *p=24;

    cout<<*p<<endl;
    
    int *a=new int;
    // Becareful when using new, because it can have a memory leak problem
    // It happens when you use new but forget to use delete
    *a=26;
    delete a;
    cout<<*a<<endl;
    
    return 0;
}
