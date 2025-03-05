#include <iostream>
#include <vector>
using namespace std;

void vector_exp(vector<int>&b);
void array_exp(int a[], int size);

int main()
{
    int a[]={9,6,4,3,2}; 
    int answer=sizeof(a)/sizeof(a[0]);  
    array_exp(a, answer); 
    vector<int>b={1,3,5,7};
    vector_exp(b);
}

void vector_exp(vector<int>&b)
{
    cout<<b.size()<<endl;
}

void array_exp(int a[], int size)
{
    cout<<sizeof(a)/sizeof(a[0])<<endl;
}