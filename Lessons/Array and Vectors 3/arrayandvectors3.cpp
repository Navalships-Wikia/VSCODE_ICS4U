#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout<<endl;

    // Array Form (Flexible)
    int n_item;

    cout<<"How many elements do you want to put: ";
    cin>>n_item;

    int a[n_item];

    for (int i=0; i<n_item; i++){
        cin>>a[i];
    }

    for (int i=0; i<n_item; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    // Vector Form
    int item;
    vector<int>b;

    cout<<"Enter all numbers, stop by entering a non-number: ";
    while(cin>>item){
        b.push_back(item);
    }
    cin.clear();
    cin.ignore(1000, '\n'); // This snippet is important or else the code will go crazy.

    for (int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }

    cout<<endl<<endl;
    return 0;
}