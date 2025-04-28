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

void doesitchange(student_info s);

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

    cout<<"BEFORE PASSING TO FUNCTION"<<endl;
    cout<<" -- Student #1's Information -- "<<endl;
    cout<<"Last Name: "<<student1.last_name<<endl;
    cout<<"First Name: "<<student1.first_name<<endl;
    cout<<"Student Number: "<<student1.student_number<<endl;
    cout<<endl;

    doesitchange(student1);
    cout<<endl;

    cout<<"AFTER PASSING AND EXITING FUNCTION"<<endl;
    cout<<"Last Name: "<<student1.last_name<<endl;
    cout<<"First Name: "<<student1.first_name<<endl;
    cout<<"Student Number: "<<student1.student_number<<endl;

    // even if you have array inside, when passing structure, the whole thing is copied.
    cout<<endl;
    return 0;
}

void doesitchange(student_info s)
{
    s.last_name = "James";
    strcpy(s.first_name, "LeBron");
    s.student_number = 24242424;

    cout<<"AFTER PASSING TO FUNCTION"<<endl;
    cout<<" -- Student #1's Information -- "<<endl;
    cout<<"Last Name: "<<s.last_name<<endl;
    cout<<"First Name: "<<s.first_name<<endl;
    cout<<"Student Number: "<<s.student_number<<endl;
}
