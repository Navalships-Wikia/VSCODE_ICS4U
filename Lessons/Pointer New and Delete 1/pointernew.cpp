#include <iostream>
using namespace std;

int main()
{
    // New and Delete

    int *p;
    p-new int[5];

    for (int i=0; i<5; i++)
    {
       p[i]=2;
    }
    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }

    return 0;
}
