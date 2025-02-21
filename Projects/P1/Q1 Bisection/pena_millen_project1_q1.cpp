#include <iostream>
using namespace std;

// BISECTION

// The task is to write a program that uses the busection method recursively to solve a cubic equation of the form:
// ax^3 + bx^2 + cx + d = 0

// begin by reading the left and right ends of an initial interval and a value of epsilon. 
// Then it should call the bisection function to find a root using the values specified.
// Continue to do this until the user inputs with only zeros. Asumme all inputs are valid.

// Function declarations
float calculation(int a, int b, int c, int d, float e);
float bisection(int a, int b, int c, int d, float e, float f, float g);

// Main code
int main()
{
    cout<<endl;

    int a, b, c, d;
    float xLeft, xRight, epsilon, a1, a2, answer;
    int pass=0;

    // Input
    cout<<"BISECTION\n"<<"Given the Cubic Function ax^3+bx^2+cx+d=0"<<endl;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<"Enter the Epislon value: ";
    cin>>epsilon;

    // Loop for calculate values
    while (pass==0)
    {
        cout<<"Enter the left x value: ";
        cin>>xLeft;
        cout<<"Enter the right x value: ";
        cin>>xRight;
        a1=calculation(a, b, c, d, xLeft);
        a2=calculation(a, b, c, d, xRight);

        if ((a1)==0)
        { 
            cout<<"\nThe x-intercept is at"<<xLeft<<endl;
            pass=1;
        }
        else if (a2==0)
        {
            cout<<"\nThe x-inercept is at"<<xRight<<endl;
            pass=1;
        }
        else if((a1/a2)>0)
        {
            cout<<"both left and right x values have the output of the same sign."<<endl;
            cout<<"Please re-enter the value"<<endl;
        }
        else{
            pass=1;
        }
    }

    // Caller for recursive bisection
    if (a1!=0 &&a2!=0)
        {
        answer=bisection(a, b, c, d, xLeft, xRight, epsilon);
        cout<<"The x-intercept is at: "<<answer<<endl;
        }

    cout<<endl<<endl;
    return 0;
}

// Function to calculate the value of the cubic function
float calculation(int a, int b, int c, int d, float e)
{
    return ((a*e*e*e)+(b*e*e)+(c*e)+d);
}

// Function to calculate the bisection recursively
float bisection(int a, int b, int c, int d, float e, float f, float g)
{
    
}