#include "complex_component.h"
#include <cmath>

// Constructors
mycomplex::mycomplex() : re(0), im(0) {}
mycomplex::mycomplex(double r, double i) : re(r), im(i) {}

// Accessor functions
double mycomplex::real() const { return re; }
double mycomplex::imag() const { return im; }
double mycomplex::absolute() const { return sqrt(re*re+im*im); }
double mycomplex::argument() const { return atan2(im,re); }

// Operators
mycomplex mycomplex::operator+(const mycomplex &n) const 
{
    return mycomplex(re+n.re,im+n.im);
}
mycomplex mycomplex::operator-(const mycomplex &n) const 
{
    return mycomplex(re-n.re,im-n.im);
}
mycomplex mycomplex::operator*(const mycomplex &n) const 
{
    return mycomplex(re*n.re-im*n.im,re*n.im+im*n.re);
}
mycomplex mycomplex::operator/(const mycomplex &n) const 
{
    double denom=n.re*n.re+n.im*n.im;
    return mycomplex((re*n.re+im*n.im)/denom,(im*n.re-re*n.im)/denom);
}

// Arithmetic operations with real
mycomplex mycomplex::operator+(double real) const 
{
    return mycomplex(re+real,im);
}
mycomplex mycomplex::operator-(double real) const 
{
    return mycomplex(re-real,im);
}
mycomplex mycomplex::operator*(double real) const 
{
    return mycomplex(re*real,im*real);
}
mycomplex mycomplex::operator/(double real) const
{
    return mycomplex(re/real,im/real);
}

// Compound assignment operators
mycomplex &mycomplex::operator+=(const mycomplex &n) 
{
    re+=n.re;
    im+=n.im;
    return *this;
}
mycomplex &mycomplex::operator-=(const mycomplex &n) 
{
    re-=n.re;
    im-=n.im;
    return *this;
}
mycomplex &mycomplex::operator*=(const mycomplex &n) 
{
    double tempRe=re*n.re-im*n.im;
    im=re*n.im+im*n.re;
    re=tempRe;
    return *this;
}
mycomplex &mycomplex::operator/=(const mycomplex &n) 
{
    double denom=n.re*n.re+n.im*n.im;
    double tempRe=(re*n.re+im*n.im)/denom;
    im=(im*n.re-re*n.im)/denom;
    re=tempRe;
    return *this;
}
mycomplex &mycomplex::operator+=(double real) 
{
    re+=real;
    return *this;
}
mycomplex &mycomplex::operator-=(double real) 
{
    re-=real;
    return *this;
}
mycomplex &mycomplex::operator*=(double real) 
{
    re*=real;
    im*=real;
    return *this;
}
mycomplex &mycomplex::operator/=(double real) 
{
    re/=real;
    im/=real;
    return *this;
}

// Comparison operators
bool mycomplex::operator==(const mycomplex &n) const 
{
    return re==n.re&&im==n.im;
}
bool mycomplex::operator!=(const mycomplex &n) const 
{
    return !(*this==n);
}

// Utility functions
mycomplex mycomplex::conjugate() const 
{
    return mycomplex(re,-im);
}
mycomplex mycomplex::reciprocal() const 
{
    double denom=re*re+im*im;
    return mycomplex(re/denom,-im/denom);
}

// Friend functions
ostream &operator<<(ostream &os, const mycomplex &n) 
{
    os<<n.re<<(n.im>=0?"+":"")<<n.im<<"i";
    return os;
}
istream &operator>>(istream &is, mycomplex &n) 
{
    is>>n.re>>n.im;
    return is;
}
mycomplex operator+(double real, const mycomplex &n) 
{   
    mycomplex answer;
    answer.re=real+n.real();
    answer.im=n.imag();
    return answer;
}
mycomplex operator-(double real, const mycomplex &n)
{   
    mycomplex answer;
    answer.re=real-n.real();
    answer.im=-n.imag();
    return answer;
}
mycomplex operator*(double real, const mycomplex &n)
{
    mycomplex answer;
    answer.re=real*n.real();
    answer.im=real*n.imag();
    return answer;
}
mycomplex operator/(double real, const mycomplex &n)
{
    double denom=n.real()*n.real()+n.imag()*n.imag();
    mycomplex answer;
    answer.re=real*n.real()/denom;
    answer.im=-real*n.imag()/denom;
    return answer;
}