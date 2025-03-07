#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort_vector(vector<int> d);

int main()
{
    int a[]={3,2,1,4,-1,6};
    int size=sizeof(a)/sizeof(a[0]);
    vector<int> c={8,4,2,1,9,-87};

    // This sort function can be used in the test
    sort(a, a+size, greater<int>());
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sort_vector(c);

    cout<<endl;
    return 0;
}

void sort_vector(vector<int> d)
{
    sort(d.begin(), d.end());
    for (int i=0; i<d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
}