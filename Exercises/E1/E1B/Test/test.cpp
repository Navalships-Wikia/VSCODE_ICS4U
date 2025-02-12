#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, char> my_map = {
    {'A','2'}, {'B','2'}, {'C','2'},
    {'D','3'}, {'E','3'}, {'F','3'},
    {'G','4'}, {'H','4'}, {'I','4'},
    {'J','5'}, {'K','5'}, {'L','5'},
    {'M','6'}, {'N','6'}, {'O','6'},
    {'P','7'}, {'Q','7'}, {'R','7'}, {'S','7'}, 
    {'T','8'}, {'U','8'}, {'V','8'},
    {'W','9'}, {'X','9'}, {'Y','9'}, {'Z','9'},
};

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
        if (phoneNumber[i]>='A' && phoneNumber[i]<='Z'){
            cout<<my_map[phoneNumber[i]];
        }
        else{
            cout<<phoneNumber[i];
        }
    }
    cout<<"\n";
    return 0;
}