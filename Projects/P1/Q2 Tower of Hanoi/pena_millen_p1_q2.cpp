#include <iostream>

void moveTower(int number, int start, int end);

using namespace std;

int main(){

    int n, s, e;

    cout<<"Enter number of disk: ";
    cin>>n;
    cout<<"Enter where to start: ";
    cin>>s;
    cout<<"Enter where to end: ";
    cin>>e;

    moveTower(n, s, e);

    return 0;
}

void moveTower(int number, int start, int end){
    int other=6-start-end; //hint: Why do we need this? 

    //What if we start at needle 2 and end at needle 1?
    //Can the above formula tell us the correct "other" needle? (Yes or no?) NO
 
    if (number==1)
       cout<<start<<" -> "<<end<<endl;
    else{
         moveTower(number-1, start, other);
         cout<<start<<" -> "<<end<<endl;
         moveTower(number-1, other, end);
    }


}
