#include <iostream>
#include <vector>

using namespace std;

// VECTORS
// We chose vectors because it has dynamic sizing.
// in array can we add one more items into it?
// The answer is no, because arrays are static.

int main(){
    cout<<endl;

    // This is how we would do it in an Array
    int a[]={1, 2, 3, 4, 5}, i;
    int size=sizeof(a)/sizeof(a[0]);
    int b[size+1];

    for (i=0; i<size; i++){
        b[i]=a[i];
    }

    b[i]=234;

    for (i=0; i<size+1; i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;

    // and now in Vector, which is much easier
    vector<int>c={1, 3, 5};
    c.push_back(100);
    cout<<c.size()<<endl;

    for (i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }

    cout<<endl<<endl;
    return 0;
}