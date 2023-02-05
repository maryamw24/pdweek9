#include <iostream>
using namespace std;
main()
{
    int size;
    int transformation;
    cout<<"ENter number of transformation needed:";
    cin>>transformation;
    cout << "Enter the size of array:";
    cin >> size;
    int number[size];
    int digit = transformation*2;
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
        if (number[i] % 2 == 0)
        {
            number[i] = number[i] - digit;
        }
        else
        {
            number[i] = number[i] + digit;
        }
    }
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        cout<<number[i] << ",";
    }
    cout<<"]";
}