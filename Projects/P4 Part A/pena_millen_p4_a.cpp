#include <iostream>
#include <string>
using namespace std;

struct tml {
    string last_name;
    string first_name;
    int jersey_number;
    int age;
    tml *next;
};

tml *add_to_list(tml *list, string ln, string fn, int jn, int agenumber);
tml *delete_from_list(tml *list, int jn);

void printing_list(tml *list);

int main()
{
int number=1, a, jerseynumber;
string lastname, firstname;
char choice;
tml *first=NULL;

    while (number!=9){
        cout<<"\n -- Welcome to Toronto Maple Leafs Database! --\n";

        cout<<"\nEnter 1 to add new player";
        cout<<"\nEnter 2 to delete player";
        cout<<"\nEnter 3 to edit player";
        cout<<"\nEnter 4 to print player's last name in ascending order";
        cout<<"\nEnter 5 to print player's first name in ascending order";
        cout<<"\nEnter 6 to print player's jersey number in ascending order";
        cout<<"\nEnter 7 to print players' age in ascending order";
        cout<<"\nEnter 8 to print player's list in the order as is";
        cout<<"\nEnter 9 to exit the program";
        cout<<"\nEnter your choice: ";
        cin>>number;

        if (number==1)
        {
            cout<<"Enter the player's last name: ";
            cin>>lastname;
            cout<<"Enter the player's first name: ";
            cin>>firstname;
            cout<<"Enter the player's jersey number: ";
            cin>>jerseynumber;
            cout<<"Enter the player's age: ";
            cin>>a;

            first=add_to_list(first, lastname, firstname, jerseynumber, a);
        }
        else if (number==2)
        {
            cout<<"Enter A if you want to enter the full name of the player to Delete: ";
            cout<<"\nor B if you want to enter the jersey number of the player to Delete: ";
            cin>>choice;
            if (choice=='b')
            {
                cout<<"Enter the jersey number: ";
                cin>>jerseynumber;
                first=delete_from_list(first, jerseynumber);
            }
        }
        else if (number==8)
        {
            printing_list(first);
        }
    }
return 0;
}

tml *add_to_list(tml *list, string ln, string fn, int jn, int agenumber)
{
    tml *new_node;
    new_node=new tml;
    new_node->last_name=ln;
    new_node->first_name=fn;
    new_node->jersey_number=jn;
    new_node->age=agenumber;
    new_node->next=list;
    return new_node; //You cannot return a local address, but the command "new" is different
    //The action with "new" and "delete" is part of the topic named "heap"
    //Please read https://www.learncpp.com/cpp-tutorial/79-the-stack-and-the-heap/ for reference (heap only)
}
tml *delete_from_list(tml *list, int jn)
{
    tml *cur, *prev;

    for (cur=list, prev=NULL; cur!=NULL && cur->jersey_number!=jn; prev=cur, cur=cur->next);

    if (cur==NULL)
    {
        cout<<"The player with this jersey number doesn't exist. Delete unsuccessful"<<endl;
        return list;
    }
    if (prev==NULL)
    {
        list=list->next;
    }
    else
        prev->next=cur->next;

    delete cur;
    cout<<"Delete complete"<<endl;
    return list;
}

void printing_list(tml *list)
{

    for (; list!=NULL; list=list->next)
    {
        cout<<"Last name: "<<list->last_name<<endl;
        cout<<"First name: "<<list->first_name<<endl;
        cout<<"Jersey Number: "<<list->jersey_number<<endl;
        cout<<"Age: "<<list->age<<endl;
    }


}