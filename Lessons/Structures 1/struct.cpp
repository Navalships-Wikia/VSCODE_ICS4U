#include <iostream>
using namespace std;

// STRUCTURE

// If the array is a way for us to hold many elements of same type
// then a structure is a way for us to hold many elements of different types
// A structure should be declared above the main function

struct soccer_team
{
    char last_name[20];
    string first_name;
    string position;
    int jersey_number;
};


int main()
{
    // Below is how we can immediately initialize a structure
    // soccer_team man_u{"de Gea", "David", "GK", 1};

    soccer_team man_u[3];
    // Now how can we print the values of the structure?
    // NOTE: We cannot just do cout<<man_u;

    // This is how we can create our own type.

    //Inputting the values of the structure
    for (int i=0; i<3; i++)
    {
        cout<<"Enter last name for player "<<i+1<<": ";
        cin.getline(man_u[i].last_name, 20);

        cout<<"Enter first name for player "<<i+1<<": ";
        getline(cin, man_u[i].first_name);

        cout<<"Enter position for player "<<i+1<<": ";
        getline(cin, man_u[i].position);

        cout<<"Enter jersey number for player "<<i+1<<": ";
        cin>>man_u[i].jersey_number;

        cout<<endl;

        cin.ignore(); // Ignore the newline character left in the input buffer
    }

    // Outputting the values of the structure
    for (int i=0; i<3; i++)
    {
        cout<<"-- Player "<<i+1<<" --"<<endl;
        cout<<man_u[i].last_name<<" "<<man_u[i].first_name<<endl;
        cout<<man_u[i].position<<endl;
        cout<<man_u[i].jersey_number<<endl;
        cout<<endl;
    }

    cout<<endl;
    return 0;
}