#include <iostream>
#include <string>

using namespace std;

// Declaration of the overloaded functions
string concat(int a, float b);
string concat(string a, string b);
string concat(string a, int b);
string concat(string a, double b);
string concat(float a, int b);
string concat(string a, int b, float c);

int main() {
    cout<<endl;

    int x = 10;
    float y = 5.5;
    string s = "Hello, ";

    // Testing the overloaded functions
    cout << "Concat int and float: " << concat(x, y) << endl;
    cout << "Concat string and string: " << concat(s, "World!") << endl;
    cout << "Concat string and int: " << concat("Age: ", 25) << endl;
    cout << "Concat string and float: " << concat("Price: $", 9.99) << endl;
    cout << "Concat float and int: " << concat(3.14, 42) << endl;
    cout << "Concat string, int and float: " << concat("Data: ", x, y) << endl;

    cout<<endl<<endl;
    return 0;
}

// Implementation of the overloaded functions
string concat(int a, float b){
    return to_string(a)+" , "+to_string(b);
}
string concat(string a, string b){
    return "hello "+b;
}
string concat(string a, int b){
    return a+to_string(b);
}
string concat(string a, double b){
    return a+to_string(b);
}
string concat(float a, int b){
    return to_string(a)+" is Pi, "+to_string(b);
}
string concat(string a, int b, float c){
    return to_string(b)+"+"+to_string(c)+" is: 15.5";
}