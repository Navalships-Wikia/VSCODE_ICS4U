#include <iostream>
using namespace std;

// Pointer Arithmetic

// Pass array into the function as pointers
// return as a pointer
// new and delete

void print_sentence(char *s);
void print_number(int s[], int size);

int main()
{
    char sentence[20]="hello";
    print_sentence(sentence+1); // Rewritten without the "[]" --> same as &a[1]

    int a[]={3,2,1,6,8,9,2,1,6,4,2,8};
    int length=sizeof(a)/sizeof(a[0]);

    return 0;
}

void print_sentence(char *s)
{
    cout<<s<<endl;
}
void print_number(int s[], int size)
{
    int *p;
    for (p=s; p<s+size; p++)
    {
        cout<<p<<endl;
    }
}