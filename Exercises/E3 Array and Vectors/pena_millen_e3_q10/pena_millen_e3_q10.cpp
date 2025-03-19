#include <iostream>
using namespace std;

// Function declaration
void insertion_sort(int a[], int size);
int search(int a[], int size, int item);

int main()
{
    cout<<endl;
    
    // Ask user for input
    int size;
    cout<<"Enter the size of your Array: ";
    cin>>size;

    int array[size];
    cout<<"Enter a list of numbers to be sorted: ";
    for (int i=0; i<size; i++) {
        cin>>array[i];
    }

    // Call sort function
    insertion_sort(array, size);

    // Output of sorted array in descending order
    cout<<"Sorted array: ";
    for (int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    // Ask user whether if they want to ADD a number from the array
    char choice;
    cout<<"\nDo you want to ADD or DELETE a number from the array? (A for Add or D for Delete): ";
    cin>>choice;

    if (choice=='A' || choice=='a')
    {
        int num;

        // Constantly prompt user to enter a nummber until it is valid
        cout<<"Enter the number you want to add: ";
        cin>>num;
    
        // add the number in the array
        array[size]=num;
        size++;

        // Sort the array again
        insertion_sort(array, size);
        cout<<endl;

        // Output of updated array
        cout<<"Updated array: ";
        for(int i=0; i<size; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
    else if (choice=='D' || choice=='d')
    {
        int num;
        int index;
       
        // Constantly prompt user to enter a nummber until it is valid
        do {
            cout<<"Enter the number you want to delete: ";
            cin>>num;
    
            // Call search function to find the number in the array
            index=search(array, size, num);

            // prompt to try again
            if (index==-1)
            {
                cout<<"Number not found in the array, Please try again."<<endl;
            }
        } while (index==-1);

        // delete all instances of the chosen number
        int newSize=size;
        for (int i=0; i<newSize;)
        {
            if (array[i]==num)
            {
                for (int j=i; j<newSize-1; j++)
                {
                    array[j]=array[j+1];
                }
                newSize--;
            }
            else
            {
                i++;
            }
        }
        size=newSize;

        // Check if array is empty before updating output
        if (size==0)
        {
            cout<<"Array is empty."<<endl;

            cout<<endl;
            return 0;
        }
        else 
        {
            cout<<"Updated array: ";
            for (int i=0; i<size; i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
    }
    else{
         cout<<endl;
        return 0;
    }

    cout<<endl;
    return 0;
}

// Functions
void insertion_sort(int a[], int size)
{
    int top;
    int item;
    int i;
    for (top=1; top<size; top++)
    {
        item=a[top];
        i=top;

        while(i>0 &&item>a[i-1])
        {
            a[i]=a[i-1];
            i--;
        }
        a[i]=item;
    }
}

int search(int a[], int size, int item)
{
    for (int i=0; i<size; i++)
    {
        if (a[i]==item)
        {
            return i;
        }
    }
    return -1;
}