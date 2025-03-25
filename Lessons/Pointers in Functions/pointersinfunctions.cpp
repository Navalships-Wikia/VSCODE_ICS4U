#include <iostream>
using namespace std;

void entry(string *fn, string *ln, int *sn);

int main()
{
    string first_name, last_name;
    int student_number;

    entry(&first_name, &last_name, &student_number);
    cout<<endl;

    cout<<first_name<<" "<<last_name<<" "<<student_number<<endl;

    return 0;
}

void entry(string *fn, string *ln, int *sn)
{
    cout<<"Enter your first name: "<<endl;
    getline(cin, *fn);
    cout<<"Enter your last name: "<<endl;
    getline(cin, *ln);
    cout<<"Enter your student number: "<<endl;
    cin>>*sn;
}