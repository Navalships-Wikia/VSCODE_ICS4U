#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    
    int *p;
    int t=5;

    p = &t;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&t<<endl;
    cout<<&p<<endl;
    
    cout<<endl;
    return 0;
}
