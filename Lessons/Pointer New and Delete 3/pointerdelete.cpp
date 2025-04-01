#include <iostream>
using namespace std;

void enter(int *b, int size);

int main()
{
    int *a;
    a=new int[5];

    enter(a, 5);

    for (int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    delete []a;
    return 0;
}

void enter(int *b, int size)
{
    for (int i=0; i<size; i++)
    {
        cin>>b[i];
    }
}
