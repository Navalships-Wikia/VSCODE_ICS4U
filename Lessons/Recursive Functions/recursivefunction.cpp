#include <iostream>

using namespace std;

// Recursive function is the act of calling the own function inside its self.
// The idea is to repeat the same step as the problem gets simpler and simpler.

// Example of Arithmetic Sequence
// tn=a+(n-1)d
// a is the first term, n is the term number, d is the difference
// 3, 5, 7, 9, 11, 13, ___ <-- How can we find the 7th term.

// the below example does not include recursion
// int main(){
  //  cout<<endl;

  //  int answer=3+(7-1)*2;
  //  cout<<answer;

  //  cout<<endl<<endl;
  //  return 0;
// }

// Although recursion is slower, it allows us to solve problems from a different perspective
// recursion method: tn=tn+2

int a_s(int term);

int main() {
    cout<<endl;

    int answer=a_s(7);
    cout<<answer;

    cout<<endl<<endl;
    return 0;
}

int a_s(int term) {
    if(term==1) {
        return 3;
    }
    else {
        return a_s(term-1)+2;
    }
}