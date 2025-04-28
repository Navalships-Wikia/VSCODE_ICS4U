#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// when struct is a regular var. the content will not change
// even when it is changed in a function, even if the struct array is inside

// if struct is an array, and you pass that into the function, if

struct student_info{
    string last_name;
    char first_name[20];
    int student_number;
};
void doesitchange(student_info s[]);
int main(){
    
    student_info student1[1];
    cout<<"Enter student 1 lastname";
    getline(cin,student1[0].last_name);
    cout<<"Enter student 1 firstname";
    cin.getline(student1[0].first_name, 20);
    cout<<"Enter student 1 student number: ";
    cin>>student1[0].student_number;
    
    cout<<"Before passing into the function....."<<endl;
    cout<<student1[0].last_name<<endl;
    cout<<student1[0].first_name<<endl;
    cout<<student1[0].student_number<<endl;
    
    doesitchange(student1);
    cout<<"After passing the function"<<endl;
    cout<<student1[0].last_name<<endl;
    cout<<student1[0].first_name<<endl;
    cout<<student1[0].student_number<<endl;
    
    
    return 0;
}
void doesitchange(student_info s[]){
    //change this to another value and see
    s[0].last_name = "James";
    strcpy(s[0].first_name, "LeBron");
    s[0].student_number = 24242424;

    cout<<"Inside the function: "<<endl;
    cout<<s[0].last_name<<endl;
    cout<<(*s).first_name<<endl;
    cout<<s->student_number<<endl;
}