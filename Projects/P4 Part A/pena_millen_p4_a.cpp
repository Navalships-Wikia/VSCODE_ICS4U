#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.14159265358979323846
using namespace std;

// Define the structures
struct cartesian 
{
    double x, y;
};

struct polar 
{
    double radius, degree;
};

// Function declarations
polar to_polar(cartesian point);
cartesian to_cartesian(polar point);

ostream& operator<<(ostream& os, const cartesian& point);
ostream& operator<<(ostream& os, const polar& point);

int main() 
{
    int choice;
    cartesian a;
    polar b;

    cout<<"Input 1 to convert Cartesian to Polar"<<endl;
    cout<<"Input 2 to convert Polar to Cartesian"<<endl;
    cout<<"Input any other input to exit: ";

    while(cin>>choice)
    {   
        // Check if the input is valid
        if (choice!=1 && choice!=2)
        {
            break;
        }

        // Convert Cartesian to Polar
        else if (choice==1)
        {
            cout<<endl;

            cout<<"Enter the x-coordinate: ";
            cin>>a.x;

            cout<<"Enter the y-coordinate: ";
            cin>>a.y;

            b = to_polar(a);
            cout<<endl;

            cout<<b;
            cout<<endl;
        }

        // Convert Polar to Cartesian
        else if (choice==2)
        {
            cout<<endl;

            cout<<"Enter the raidus: ";
            cin>>b.radius;

            cout<<"Enter the angle in degree: ";
            cin>>b.degree;

            a = to_cartesian(b);
            cout<<endl;

            cout<<a;
            cout<<endl;
        }

        // repeat untill the user inputs any other input
        cout<<"Input 1 to convert Cartesian to Polar"<<endl;
        cout<<"Input 2 to convert Polar to Cartesian"<<endl;
        cout<<"Input any other input to exit: ";
    }
    cout<<endl;
    return 0;
}

// Converters
polar to_polar(cartesian point) 
{
    polar result;
    result.radius = sqrt(point.x * point.x + point.y * point.y);
    result.degree = atan2(point.y, point.x) * (180.0 / pi);
    return result;
}

cartesian to_cartesian(polar point) 
{
    cartesian result;
    double radian = point.degree * (pi / 180.0);
    result.x = point.radius * cos(radian);
    result.y = point.radius * sin(radian);
    return result;
}

// outputters
ostream& operator<<(ostream& os, const cartesian& point) 
{
    os<<"Cartesian Coordinate: ("<<point.x<<", "<<point.y<<")"<< endl;
    return os;
}
ostream& operator<<(ostream& os, const polar& point) 
{
    os<<"Polar Coordinate: (Radius: "<<point.radius<<", Angle: "<<point.degree<<" degrees)"<<endl;
    return os;
}