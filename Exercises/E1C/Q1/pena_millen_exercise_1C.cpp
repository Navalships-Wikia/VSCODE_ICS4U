#include <iostream>

using namespace std;

// 1. Func
void mice(){
    cout<<"Three blind mice\n";
}

void run(){
    cout<<"See how they run\n";
}

// 2. Func
int age(int a){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    a = age;
}

int main(){

    // 1.
    mice();
    mice();
    run();
    run();

    cout<<endl;
}