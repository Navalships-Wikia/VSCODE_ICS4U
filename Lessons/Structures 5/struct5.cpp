#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct student_info // Struct is like a regular variable, but it can hold multiple variables of different types
{
    string last_name;
    char first_name[20];
    int student_number;
};

ostream& operator<<(ostream &os, const student_info &s);
istream& operator>>(istream &is, student_info &s);

int main()
{
    student_info student1;
    cout<<" -- Student #1 -- "<<endl;
    cin>>student1;
    
    cout<<endl;

    cout<<" -- student #1's Information -- "<<endl;
    cout<<student1<<endl;

    cout<<endl;
    return 0;
}

ostream& operator<<(ostream &os, const student_info &s)
{
    os<<"Last Name: "<<s.last_name<<endl;
    os<<"First Name: "<<s.first_name<<endl;
    os<<"Student Number: "<<s.student_number<<endl;
    return os;
}
istream& operator>>(istream &is, student_info &s)
{
    cout<<"Enter Student #1's Last Name: ";
    getline(is, s.last_name);

    cout<<"Enter Student #1's First Name: ";
    is.getline(s.first_name, 20);

    cout<<"Enter Student #1's Student Number: ";
    is>>s.student_number;

    return is;
}