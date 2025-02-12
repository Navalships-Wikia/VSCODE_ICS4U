#include <iostream>

using namespace std;

int main() {

// 2a
int num1, num2;

cout<<"Enter your first number: ";
cin>>num1;

cout<<"Enter your second number: ";
cin>>num2;

if (num1>num2) {
    cout<<num1;
}
else if (num2>num1) {
    cout<<num2;
}
cout<<"\n";


// 2b
int num3;

cout<<"Enter a number greater than one for the pyramid: ";
cin>>num3;

int i = 0;

while (i <= num3) {
    int j = 1;
    while (j <= i) {
        cout<<"*";
        j++;
    }
    cout<<"\n";
    i++;
}
cout<<"\n";


// 2c
int num4, k;

cout<<"Enter a number: ";
cin>>num4;

for (k=num4;  k>1;) {
    if (k*k<=num4) {
        cout<<k*k<<" is a perfect square."<<endl;
    }
}
cout<<"\n";
return 3;
}

