#include <iostream>
#include <cstring>
using namespace std;

char *my_strnchr(char *s, char c, int n);

int main() 
{
    // Test the function
    char str[]="hello world, hello universe";
    char target='o';
    int occurrence=2;

    char *result=my_strnchr(str, target, occurrence);

    if (result!=nullptr)
    {
        cout<<"The "<<occurrence<<"nd occurrence of '"<< target<<"' is at position: "<<(result-str)<<endl;
    } 
    else 
    {
        cout<<"The character '"<<target<<"' does not occur "<<occurrence<<" times in the string."<<endl;
    }

    return 0;
}

char *my_strnchr(char *s, char c, int n) 
{
    // Initialize a counter for occurrences of the character
    int count = 0;

    // Traverse the string
    while (*s != '\0') 
    {
        if (*s==c) 
        {
            count++;
            if (count==n) 
            {
                return s; // Return pointer to the n-th occurrence
            }
        }
        s++;
    }

    // If fewer than n occurrences are found, return null pointer
    return nullptr;
}