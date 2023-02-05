#include <iostream>
using namespace std;
main()
{
    int size = 4;
    string check = "false";
    string word[size];
    for (int i = 0; i < size; i++)
    {
        cin >> word[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (word[i] == word[0])
        {
            check = "true";
        }
        else
        {
            check = "false";
            break;
        }
    }
    if (check == "true")
        {
            cout<< "true";
        }
        else
        {
            cout<< "false";
        }
}
