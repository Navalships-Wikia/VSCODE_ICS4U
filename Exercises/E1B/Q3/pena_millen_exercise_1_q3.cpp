#include <iostream>
#include <string>

using namespace std;

int main(){
    string sentence;

    cout<<"Enter a sentence: ";
    getline(cin, sentence);
    for (int i=; i<sentence.size()-2, i++;){
        if (sentence[i]=='f' && sentence[i+1]=='o' && sentence[i+2]=='o')
        sentence[i]='x';
        sentence[i+1]='x';
        sentence[i+2]='x';
    }
    cout<<sentence;
}