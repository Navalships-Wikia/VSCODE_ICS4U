#include <iostream>
using namespace std;

// Function declaration
void insertion_sort(int a[], int size);

int main()
{
    // Ask user for input
    int size;
    cout << "Enter the size of your Array: ";
    cin >> size;

    int a[size];
    cout << "Enter a list of numbers to be sorted: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    // Call sort function
    insertion_sort(a, size);

    // Output of sorted array in descending order
    cout<<"Sorted array: ";
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}

// Functions
void insertion_sort(int b[], int size)
{
    int top;
    int item;
    int i;
    for (top=1; top<size; top++)
    {
        item=b[top];
        i=top;

        while(i>0 &&item>b[i-1])
        {
            b[i]=b[i-1];
            i--;
        }

        b[i]=item;
    }
}