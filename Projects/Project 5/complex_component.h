#include <iostream>
using namespace std;

class mycomplex {
private:
    double re;
    double im;
public:
    // Constructors
    mycomplex();
    mycomplex(double r, double i);

    // accessor functions
    double real() const;
    double imag() const;
    double absolute() const; // absolute value of complex number
    double argument() const; // argument (angle) of complex number

    // operators
    mycomplex operator+(const mycomplex &n) const;
    mycomplex operator-(const mycomplex &n) const;
    mycomplex operator*(const mycomplex &n) const;
    mycomplex operator/(const mycomplex &n) const;

    // arithmetic operations with real
    mycomplex operator+(double real) const;
    mycomplex operator-(double real) const;
    mycomplex operator*(double real) const;
    mycomplex operator/(double real) const;

    // Compound assignment operators
    mycomplex &operator+=(const mycomplex &n);
    mycomplex &operator-=(const mycomplex &n);
    mycomplex &operator*=(const mycomplex &n);
    mycomplex &operator/=(const mycomplex &n);
    mycomplex &operator+=(double real);
    mycomplex &operator-=(double real);
    mycomplex &operator*=(double real);
    mycomplex &operator/=(double real);

    // Comparison operators
    bool operator==(const mycomplex &n) const;
    bool operator!=(const mycomplex &n) const;

    // Utility functions
    mycomplex conjugate() const; // returns the conjugate of the complex number
    mycomplex reciprocal() const; // returns the reciprocal of the complex number

    // Friend functions
    friend ostream &operator<<(ostream &os, const mycomplex &n);
    friend istream &operator>>(istream &os, mycomplex &n);
    friend mycomplex operator+(double real, const mycomplex &n);
    friend mycomplex operator-(double real, const mycomplex &n);
    friend mycomplex operator*(double real, const mycomplex &n);
    friend mycomplex operator/(double real, const mycomplex &n);
};
