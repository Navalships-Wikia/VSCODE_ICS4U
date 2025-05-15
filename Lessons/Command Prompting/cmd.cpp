#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float answer = 0;

    for (int i=1; i<argc; i++)
    {
        answer+=stof(argv[i]);
    }
    cout<<answer;
    return 0;
}

