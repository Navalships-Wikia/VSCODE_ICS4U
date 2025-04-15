#include <iostream>
using namespace std;

void enter(int a[][2], int row);

int main()
{
    int a[5][2];
    enter(a, 5);

    for (int i=0; i<5; i++)
    {
        for (int k=0; k<2; k++)
        {
            cout<<a[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

void enter(int a[][2], int row)
{
    for (int i=0; i<row; i++)
    {
        for (int k=0; k<2; k++)
        {
            cin>>a[i][k];
        }
        cout<<endl;
    }
}