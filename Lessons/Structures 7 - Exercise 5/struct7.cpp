#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct fraction
{
    int numerator;
    int denominator;
};

struct decimal
{
    int integer; 
    float floating_point; 
};

fraction addition(fraction f1, fraction f2);
fraction subtraction(fraction f1, fraction f2);
fraction multiplication(fraction f1, fraction f2);
fraction division(fraction f1, fraction f2);

decimal convert_to_dec(fraction answer);

ostream& operator<<(ostream &os, const fraction &s);
istream& operator>>(istream &is, fraction &s);
ostream& operator<<(ostream &os, const decimal &d);

int main()
{
    
    fraction f1, f2, answer;
    decimal dec_answer;

    cin>>f1; 
    cin>>f2;

    answer=addition(f1, f2);
    cout<<f1<<"+"<<f2<<" is: "<<answer<<endl;

    dec_answer=convert_to_dec(answer);
    cout<<dec_answer<<endl;
   
    fraction sub_result = subtraction(f1, f2);
    cout<<f1<<" - "<<f2<<" is: "<<sub_result<<endl;

    fraction mul_result = multiplication(f1, f2);
    cout<<f1<< " * "<<f2<<" is: "<<mul_result<<endl;

    fraction div_result = division(f1, f2);
    cout<<f1<<" / "<<f2<<" is: "<<div_result<<endl;

    cout<<endl;
    return 0;
}

// Function for addition
fraction addition(fraction f1, fraction f2)
{
    fraction result;
    result.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
    result.denominator = f1.denominator * f2.denominator;
    return result;
}
// Function for subtraction
fraction subtraction(fraction f1, fraction f2)
 {
    fraction result;
    result.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
    result.denominator = f1.denominator * f2.denominator;
    return result;
}
// Function for multiplication
fraction multiplication(fraction f1, fraction f2) 
{
    fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}
// Function for division
fraction division(fraction f1, fraction f2) 
{
    fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return result;
}

decimal convert_to_dec(fraction answer)
{
    decimal result; //eg 38/24
    result.integer= answer.numerator/answer.denominator; //integer division
    result.floating_point=(float)(answer.numerator)/answer.denominator-result.integer;
    return result;
}

istream& operator>>(istream &is, fraction&s)
{
    cout<<"Enter the numerator: ";
    is>>s.numerator;
    cout<<"Enter denominator: ";
    is>>s.denominator;
    return is;
}
ostream& operator<<(ostream &os, const fraction &s)
{
    os<<s.numerator<<"/"<<s.denominator;
    return os;
}
ostream& operator<<(ostream &os, const decimal &d) 
{
    os<<d.integer<<" "<<d.floating_point<<" in decimal format";
    return os;
}