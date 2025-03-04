#include <iostream>
using namespace std;

// Searching and Sorting
// Linear vs vs Binary Search
// Sorting Types: Insertion, Selection, Bubble
// Big o notation

int linearSearch(int b[], int size, int item, int &count);

int main() 
{
    cout<<endl;

    // LINEAR SEARCH
    int index, count=0;
    int a[]={2,3,1,8,9,10,5,6};
    int s=sizeof(a)/sizeof(a[0]);

    index=linearSearch(a, s, 5, count);
    cout<<"item 5 is found at index: "<<index<<endl;
    cout<<"It teakes you "<<count<<" searches"<<endl;

    // BIG O NOTATION
    // It tells us how complicated the searching and sorting will be

    // In the linear search, the worst case scenario is O(n), the best case scenario is O(1)

    cout<<endl<<endl;
    return 0;
}

int linearSearch(int b[], int size, int item, int &count) 
{
    // We want to return the index of the lcoation
    // If the find cannot be found, then return -1
    for (int i=0; i<size; i++)
    {
        if (b[i]==item)
        {
            return i;
        }
        count++;
    }
    return -1;
}