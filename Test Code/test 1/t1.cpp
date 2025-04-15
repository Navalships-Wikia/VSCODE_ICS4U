#include <iostream>
using namespace std;
int main(){

int tacos[10] = {5,2,8,4,1,2,2,4,6,8};
int * pt = tacos;
pt = pt + 1;
int *pe = &tacos[9];
pe--;
int diff = pe - pt;
int diff2 =*pe-pt[1];
cout<<diff<<endl;
cout<<diff2<<endl;

return 0;
}
