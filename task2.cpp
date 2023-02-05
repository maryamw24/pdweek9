#include <iostream>
using namespace std;
main()
{
    string movie;
    float price;
    int size = 5;
    cout << "Enter movie name:";
    cin >> movie;
    string movies[size] = {"Gladiators", "StarWars", "Terminator", "TakingLives", "TomRider"};
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            price = 500 - (500 * 0.05);
        }
        else
        {
            price = 500 - (500 * 0.10);
        }
    }
    cout<<"Price is :"<<price;
}