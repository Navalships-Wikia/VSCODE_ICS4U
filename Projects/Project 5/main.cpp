#include "complex_component.h"
#include <iostream>
using namespace std;

int main()
{
    //basic
    mycomplex c1, c2, c3(4, 5), c4;

    cout<<c1<<endl;
    cout<<"basic: please enter 9 7 (separated by space)"<<endl;

    cin>>c2; //enter real number and imaginary number (separated by space) enter 9 7
    cin.get();
    cout<<c2<<endl;
    cout<<c3<<endl;
    c4=mycomplex(2, 6);
    cout<<c4<<endl;

    //arithmetic operation
    mycomplex c5, c6, c7;
    cout<<"arithmetic operation"<<endl;
    c5=c3-c4;
    c6=c3*c4;
    c7=c3/c4;
    cout<<c3+c4<<endl;
    cout<<c5<<endl;
    cout<<c6<<endl;
    cout<<c7<<endl;

    //misc
    cout<<"misc"<<endl;
    cout<<c3.real()<<endl;
    cout<<c3.imag()<<endl;
    cout<<c3.absolute()<<endl;

    //arithemetic operations that may or may not require friends

    //more complicated operations
    double x=3; //for simplicity's sake, you can assume we only have real number with type double
    cout<<"more complex operation"<<endl;
    cout<<c3+x<<endl;
    cout<<x+c4<<endl;
    cout<<c3-x<<endl;
    cout<<x-c4<<endl;
    cout<<c3*x<<endl;
    cout<<x*c4<<endl;
    cout<<c3/x<<endl;
    cout<<x/c4<<endl;

    //compounded operator
    cout<<"compounded operator"<<endl;
    c3+=c4;
    cout<<c3<<endl;
    c3+=x;
    cout<<c3<<endl;
    c4-=c2;
    cout<<c4<<endl;
    c4-=x;
    cout<<c4<<endl;
    c3*=c4;
    cout<<c3<<endl;
    c3*=x;
    cout<<c3<<endl;
    c4/=c2;
    cout<<c4<<endl;
    c4/=x;
    cout<<c4<<endl;

    //comparison
    cout<<"comparison"<<endl;
    mycomplex c8=mycomplex(9, 7);
    
    if (c2==c8)
    {
        cout<<c2<<" and "<<c8<<" are the same"<<endl;
    }
    else
    {
        cout<<c2<<" and "<<c8<<" are not the same"<<endl;
    }
    cout<<"Enter any character to exit (for the exe demo)";
    cin.get();

cout<<endl;
return 0;
}
