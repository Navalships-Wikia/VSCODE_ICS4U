#include <iostream>
#include <cstring> 
using namespace std;

void permute(char* a, int b, int r);
void ownswap(char* x, char* y); // Declaration of custom swap function

// Driver Code
int main()
{
    char* str=new char[5]; 
    strcpy(str, "ABCD");     
    int n=strlen(str);
    permute(str, 0, n-1);
    delete[] str;            
    return 0;
}

void permute(char* a, int b, int r)
{
    // Base case
    if (b==r)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i=b; i<=r; i++)
        {
            // Swapping done using ownswap
            ownswap(a+b, a+i);

            // Recursion called
            permute(a, b+1, r);

            // Backtrack
            ownswap(a+b, a+i);
        }
    }
}

// Custom swap function using pointer notation
void ownswap(char* x, char* y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}