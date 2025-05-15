#include <iostream>
using namespace std;

struct our_array
{
    float number;
    our_array *next;
};

our_array *adding(our_array *a, float content); // Backward
our_array *adding2(our_array *a, float content); // Forward
our_array *deleting(our_array *a, float content);
our_array *insert(our_array *a, float content, float target);

int main()
{   
    float content, target;
    our_array *p;
    p=NULL;

    cout<<"keep enter numbers, separated by space, and enter non number to exit: ";

    while(cin>>content)
    {
        // p=adding(p, content); // Backward
        p=adding2(p, content); // Forward
    }
    
    // display the linked list
    for (our_array *beginning=p; beginning!=NULL; beginning=beginning->next)
    {
        cout<<beginning->number<<" ";
    }
    cout<<endl;

    cout<<"Which content you will like to be deleted: ";
    cin.clear();
    cin.ignore(250, '\n');
    cin>>content; // assuming they must enter numbers

    cout<<"Here is the new linked list with ALL the selected content being deleted: "<<endl;
    p=deleting(p, content);

    if (p==NULL)
    {
        cout<<"The linked list is empty"<<endl;
    }
    else
    {
        // Display the linked list after deletion
        for (our_array *beginning=p; beginning!=NULL; beginning=beginning->next)
        {
            cout<<beginning->number<<" ";
        }
    }

    cout<<"\nEnter a number to be inserted: ";
    cin>>content;

    cout<<"Enter a number so the content will be"<<" inserted after the first discovery of this number."<<" If the number is not in the linked list, the content will be inserted at the end of the list: ";
    cin>>target;

    p=insert(p, content, target);

    // Display the linked list after insertion
    for (our_array *beginning=p; beginning!=NULL; beginning=beginning->next)
    {
        cout<<beginning->number<<" ";
    }

    cout<<endl;
    return 0;
}

our_array *adding(our_array *a, float content)
{
    // Backwards Addition
    our_array *new_node = new our_array;
    new_node->number = content;
    new_node->next = a;
    a = new_node;
    return a;
}
our_array *adding2(our_array *a, float content)
{
    // Forward Addition
    our_array *new_node = new our_array;
    new_node->number = content;
    new_node->next = NULL;

    if (a == NULL)
    {
        a = new_node;
    }
    else
    {
        our_array *current = a;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
    return a;
} 
our_array *deleting(our_array *a, float content)
{
    // Deleting all occurrences of content
    our_array *current = a;
    our_array *previous = NULL;

    while (current != NULL)
    {
        if (current->number == content)
        {   
            if (previous == NULL)
            {
                a = current->next; // Deleting the first node
                delete current;
                current = a;
            }
            else
            {
                previous->next = current->next; // Bypass the current node
                delete current;
                current = previous->next;
            }
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
    return a;
}
our_array *insert(our_array *a, float content, float target)
{
    // Inserting content after the first occurrence of target
    our_array *new_node = new our_array;
    new_node->number = content;
    new_node->next = NULL;

    if (a == NULL)
    {
        a = new_node; // If the list is empty, insert at the beginning
        return a;
    }

    our_array *current = a;
    while (current != NULL)
    {
        if (current->number == target)
        {
            new_node->next = current->next; // Link to the next node
            current->next = new_node; // Insert after the target node
            return a;
        }
        current = current->next;
    }

    // If target not found, insert at the end
    current = a;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new_node;

    return a;
}