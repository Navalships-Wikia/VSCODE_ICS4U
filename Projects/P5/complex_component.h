#include <iostream>
using namespace std;

class mycomplex{
private:
    double re;
    double im;
public:
    // Constructors
    mycomplex(); 
    mycomplex(double r, double i); 

    // accessor functions
    double real()const; 
    double imag()const;
    double absolute()const; //absolute value of complex number
    double angle()const; //angle of complex number

    //friend here
    friend ostream &operator<<(ostream &os, const mycomplex &n);
    friend istream &operator>>(istream &os, mycomplex &n);

};
