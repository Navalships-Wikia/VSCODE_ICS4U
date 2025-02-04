#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    int number=rand()%100+1;
    int guess;

    int count = 0:
    while(true){
        cout<<"Guess a number: ";
        cin>>guess;
        count++;
        if(guess>number){
            cout<<"number is too big\n";
        }
        else if(guess<number){
            cout<<"number is too small\n";
        }
        else{
            break;
        }
    }
    if(count = 5){
       cout<< "Good job";
    }
    else{
        cout<<"ICS4U will have a test";
    }

return 0;
}