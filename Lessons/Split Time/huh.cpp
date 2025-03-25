#include <iostream>
using namespace std;

void split_time(long int total_sec, int *hr, int *min, int *sec);

int main()
{
    long int seconds_in_total;
    int hours, minutes, seconds;

    cout<<"Enter the seconds in total: ";
    cin>>seconds_in_total;

    split_time(seconds_in_total, &hours, &minutes, &seconds);

    cout<<"It is "<<hours<<" hour(s), "<<minutes<<" minute(s), and "<<seconds<<" second(s)."<<endl;
}

void split_time(long int total_sec, int *hr, int *min, int *sec)
{
    *hr=total_sec/3600;
    *min=(total_sec%3600)/60;
    *sec=(total_sec%3600)%60;
}