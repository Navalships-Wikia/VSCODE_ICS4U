#include <iostream>
#include <string>

using namespace std;

// function overloading is when the program can choose the correct 
// function to run based on number and/or order of argument.

// However, one important concept to avoid confusion about is that function overloading only works for
// variating argument types. This will not work on functions on those that return a value.

// you cannot have function overloading with "string(string a, int b);"

void message();
void message(string s);
void message(int n);
void message(string s, int n);
void message(int n, string s); // parameters
string message(string s, int m, int a);
string message(int a, int b, int c);

int main(){
    cout<<endl;

    string name = "Kwan", answer;
    int phonenumber = 416123445;
    int age = 99;
    int x = 1, y = 2, z = 3;

    // message(phonenumber);
    // message(name);
    // message();
    answer = message(1, 2, 3); // (name, phonenumber) <-- arguments
    cout<<answer;


    cout<<endl<<endl;
    return 0;
}

void message(){
    cout<<"Hello"<<endl;
}
void message(string s){
    cout<<s<<" sit!!!"<<endl;
}
void message(int n){
    cout<<"Hi, is your phone number "<<n<<" remember, I was your high school buddy!"<<endl;
}
void message(string s, int n){
    cout<<"I like programming!"<<endl;
}
void message(int n, string s){
    cout<<"I do not like calculus"<<endl;
}
string message(string s, int m, int a){
    return s+" is not young";
}
string message(int a, int b, int c){
    return to_string(a)+to_string(b)+to_string(c)+" rider kick";
}