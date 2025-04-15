#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> days;
    vector<string> texts;
    int day;
    string text;

    cout<<"Enter day and reminder: ";
    while (cin>>day && day!=0)
    {
        cin.ignore(); // Ignore the space after the day
        getline(cin, text); // Read the rest of the line as the reminder text
        days.push_back(day);
        texts.push_back(text);
        cout<<"Enter day and reminder: ";
    }

    // Manual sorting of reminders by day
    for (size_t i=0; i<days.size(); ++i)
    {
        for (size_t j=i+1; j<days.size(); ++j)
        {
            if (days[j]<days[i])
            {
                swap(days[i], days[j]);
                swap(texts[i], texts[j]);
            }
        }
    }

    // Print sorted reminders
    for (size_t i=0; i<days.size(); ++i)
    {
        cout<<days[i]<<" "<<texts[i]<<endl;
    }

    return 0;
}
