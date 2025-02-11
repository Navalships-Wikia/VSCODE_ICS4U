#include <iostream>

using namespace std;

// WITHOUT RECURSION
// int main(){
//    cout<<endl;

//    int term = 7, answer = 1;
    
//    for (int i=term; i>0; i--){
//       answer*=i;
//    }

//    cout<<answer;

//    cout<<endl<<endl;
//    return 0;
//}


// WITH RECURSION
int recursiveFactorial(int term);

int main(){
    cout<<endl;

    int answer=recursiveFactorial(7);
    cout<<answer;

    cout<<endl<<endl;
    return 0;
}

int recursiveFactorial(int term){
    if(term==1){
        return 1;
    }
    else{
        return term*recursiveFactorial(term-1);
    }
}