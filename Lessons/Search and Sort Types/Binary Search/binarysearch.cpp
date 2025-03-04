#include <iostream>
using namespace std;

// Searching and Sorting
// Linear vs vs Binary Search
// Sorting Types: Insertion, Selection, Bubble
// Big o notation

int binarySearch(int b[], int size, int item, int &count);

int main() 
{
    cout<<endl;

    // BINARY SEARCH
    int index, count=0;
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int s=sizeof(a)/sizeof(a[0]);

    index=binarySearch(a, s, 20, count);
    cout<<"item 5 is found at index: "<<index<<endl;
    cout<<"It teakes you "<<count<<" searches"<<endl;

    cout<<endl<<endl;
    return 0;
}

int binarySearch(int b[], int size, int item, int &count) 
{
    int start=0;
    int end=size-1;
    int mid;

    while (start<=end)
    {
        // Best case scenario is O(1)
        // Worst case scenario is O(log n)
        // log has a base of 2

        mid=(start+end)/2;
        count++;

        if (b[mid]==item)
        {
            return mid;
        }
        else if (b[mid]>item)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}