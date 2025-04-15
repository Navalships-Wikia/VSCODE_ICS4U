#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct student_info
{
    string last_name;
    char first_name[20];
    int student_number;
};

int main()
{
    cout<<" -- Student #1 -- "<<endl;
    student_info student1;
    cout<<"Enter Student #1's Last Name: ";
    getline(cin, student1.last_name);

    cout<<"Enter Student #1's First Name: ";
    cin.getline(student1.first_name, 20);

    cout<<"Enter Student #1's Student Number: ";
    cin>>student1.student_number;

    cout<<endl;

    cout<<" -- Student #1's Information -- "<<endl;
    cout<<"Last Name: "<<student1.last_name<<endl;
    cout<<"First Name: "<<student1.first_name<<endl;
    cout<<"Student Number: "<<student1.student_number<<endl;
    cout<<endl;

    // Whenever learning a new concept in CS, you should try to find out whether
    // if it passes by value or by reference.

    cout<<" -- Student #2 -- "<<endl;
    student_info student2;
    student2 = student1; // Copying the structure

    cout<<" -- Student #2's Information -- "<<endl;
    cout<<"Last Name: "<<student2.last_name<<endl;
    cout<<"First Name: "<<student2.first_name<<endl;
    cout<<"Student Number: "<<student2.student_number<<endl;
    cout<<endl;

    cout<<"Changing Student #2's Information..."<<endl;
    student2.last_name = "Gates";
    strcpy(student2.first_name, "Bill");
    student2.student_number = 98765;

    cout<<" -- Student #2's New Information -- "<<endl;
    cout<<"Last Name: "<<student2.last_name<<endl;
    cout<<"First Name: "<<student2.first_name<<endl;
    cout<<"Student Number: "<<student2.student_number<<endl;
    cout<<endl;

    cout<<" -- Student #1's Information -- "<<endl;
    cout<<"Last Name: "<<student1.last_name<<endl;
    cout<<"First Name: "<<student1.first_name<<endl;
    cout<<"Student Number: "<<student1.student_number<<endl;
    cout<<endl;

    cout<<endl;
    return 0;
}
