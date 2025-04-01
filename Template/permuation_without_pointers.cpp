#include <iostream>
#include <cstring> //it is better to use character array here for this project
using namespace std;

void permute(char a[], int b, int r) ;

// Driver Code
int main()
{
    char str[] = "ABCD";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
void permute(char a[], int b, int r)
{
    // Base case
    if (b == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = b; i <= r; i++)
        {

            // Swapping done
            swap(a[b], a[i]);

            // Recursion called
            permute(a, b+1, r);

            //backtrack
            swap(a[b], a[i]);
        }
    }
}
