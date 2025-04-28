#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct fraction // Struct is like a regular variable, but it can hold multiple variables of different types
{
    int numerator;
    int denominator;
};

fraction addition(fraction f1, fraction f2);

ostream& operator<<(ostream &os, const fraction &s);
istream& operator>>(istream &is, fraction &s);

int main()
{
    fraction f1, f2, answer;

    cin>>f1;
    cin>>f2;

    answer = addition(f1, f2);
    cout<<"The sum of the two fractions is: "<<answer<<endl;

    cout<<endl;
    return 0;
}

fraction addition(fraction f1, fraction f2)
{
    fraction result;

    result.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
    result.denominator = f1.denominator * f2.denominator;

    return result;
}

ostream& operator<<(ostream &os, const fraction &s)
{
    os<<s.numerator<<"/"<<s.denominator<<endl;

    return os;
}
istream& operator>>(istream &is, fraction &s)
{
    cout<<"Enter the Numerator: ";
    is>>s.numerator;

    cout<<"Enter the Denominator: ";
    is>>s.denominator;

    return is;
}