#include <iostream>
using namespace std;

// A recursive function does not neccesarily need to return a value

void print(int n);

int main(){
    cout<<endl;

    print(3);

    cout<<endl<<endl;
    return 0;
}

void print(int n){

    // This will print 1, 2, 3
    // if we flip the statements inside else, then it will print 3, 2, 1 instead
    
    if (n==1){
        cout<<n<<endl;
    }
    else{
        print(n-1);
        cout<<n<<endl;
    }
}