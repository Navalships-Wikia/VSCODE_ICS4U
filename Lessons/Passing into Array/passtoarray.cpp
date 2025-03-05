#include <iostream>
#include <vector>
using namespace std;

void doesitchange(vector<int>a);
void doesitchange(int a[]);

int main()
{
    int a[]={1,2,3,4,5,6,7};
    vector<int>b={3,7,8,9,10};

    cout<<"Before the change: "<<a[0]<<endl;
    doesitchange(a);
    cout<<"After the change: "<<a[0]<<endl;

    cout<<"For vector:"<<endl;
    cout<<"Before the change: "<<b[0]<<endl;
    doesitchange(b);
    cout<<"After the change: "<<b[0]<<endl;

    return 0;
}

void doesitchange(int a[])
{
    a[0]=100;
    cout<<"In the function: "<<a[0]<<endl;
}

void doesitchange(vector<int>a) 
{
    a[0]=1000;
    cout<<"In the function: "<<a[0]<<endl;
}