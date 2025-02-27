#include <iostream>
#include <vector>

using namespace std;

// ARRAY AND VECTORS

int main(){
    cout<<endl;

    int a[]={1, 2, 3, 4, 5, 6};
    int size=sizeof(a)/sizeof(a[0]);

    for (int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // VECTORS

    vector<int>b={9, 8, 7, 6, 5, 4, 3};
    cout<<b.size();

    for (int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    
    cout<<endl<<endl;
    return 0;
}