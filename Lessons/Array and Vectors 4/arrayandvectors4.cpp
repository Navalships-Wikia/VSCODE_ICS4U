#include <iostream>
#include <vector>

using namespace std;

// Deletion in Array and Vectors

int main(){
    cout<<endl;

    // ARRAY FORM
    int a[]={1, 2, 3, 4, 3}, count=0; // Let us aim to delete the excess number 3
    int size=sizeof(a)/sizeof(a[0]);

    // First we have to count how many items you want to be deleted
    for (int i=0; i<size; i++){
        if (a[i]==3){
            count++;
        }
    }
    // then we use a flexible array
    int newsize=size-count;
    int b[newsize];
    
    // then map the items I want to have in the new array
    for (int i=0, k=0; i<size; i++){
        if (a[i]!=3){
            b[k]=a[i]; // Use a different index
            k++;
        }
    }

    for (int i=0; i<newsize; i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;

    // VECTOR FORM
    // It is a little tricky, as soon as we delete it, the size of the vector will change
    vector<int>c={1, 2, 3, 4, 3}; // we will delete the same thing
    vector<int>::iterator d; // the variable b becomes a pointer to go through the vector

    for (d=c.begin(); d!=c.end();){

        // In this case, b is pointing at the beginning of the vector
        if (*d==3){
            // if the value of our pointing is equal to 3, then we will delete it
            d=c.erase(d); // erase the value and make b point the next value
        }
        else{
            d++;
        }
    }

    cout<<c.size()<<endl;
    for (int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }

    cout<<endl<<endl;
    return 0;
}