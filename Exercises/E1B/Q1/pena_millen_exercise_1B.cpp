#include <iostream>
#include <string>
using namespace std;

// 1. User will enter a phone number, it can include numbers and letters (Assume all Capital)
// 2. If the phone number contains any letters, it will be translated into a number
// 3. Print the final result, if only numbers, it just prints the original number.

int main() {

    string phoneNumber;

    cout<<"Enter a Phone Number: ";
    getline(cin, phoneNumber);

    // Comparison should be done with ASCII TABLE
    for (int i=0; i<phoneNumber.length(); i++){
        // Conversion to Uppercase
        if (phoneNumber[i]>='a' && phoneNumber[i]<='z'){
            phoneNumber[i]=phoneNumber[i]-32;
        }

        if (phoneNumber[i]>='A' && phoneNumber[i]<='C'){
            cout<<"2";
        }
        else if (phoneNumber[i]>='D' && phoneNumber[i]<='F'){
            cout<<"3";
        }
        else if (phoneNumber[i]>='G' && phoneNumber[i]<='I'){
            cout<<"4";
        }
        else if (phoneNumber[i]>='J' && phoneNumber[i]<='L'){
            cout<<"5";
        }
        else if (phoneNumber[i]>='M' && phoneNumber[i]<='O'){
            cout<<"6";
        }
        else if (phoneNumber[i]>='P' && phoneNumber[i]<='S'){
            cout<<"7";
        }
        else if (phoneNumber[i]>='T' && phoneNumber[i]<='V'){
            cout<<"8";
        }
        else if (phoneNumber[i]>='X' && phoneNumber[i]<='Z'){
            cout<<"9";
        }
        else{
            cout<<phoneNumber[i];
        }
    }
    cout<<"\n";
    return 0;
}

