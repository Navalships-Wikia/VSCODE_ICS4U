#include <iostream>

using namespace std;

// continuation of Factorial example
// 5! = 5*4*3*2*1
// with recursion, this would be 5*4!

int factorial(int term);

int main(){
    cout<<endl;

    int answer, term;
    answer = factorial(5);
    cout<<answer;

    cout<<endl<<endl;
    return 0;
}

int factorial(int term){
    // This recursive function will keep calling itself
    // ensure you have the simplest case ready

    if(term==1){
        return 1;
    }
    else{
        return term*factorial(term-1);
    }
}