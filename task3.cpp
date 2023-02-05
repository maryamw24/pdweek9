#include <iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter any word:";
    cin>>word;
    int count = word.length();
    if (count % 2 == 0)
    {
        cout<<"TRUE";
    }
    else 
    {
        cout<<"FALSE";
    }
}