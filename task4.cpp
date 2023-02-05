#include <iostream>
using namespace std;
int counting(int number);
main()
{
    int size;
    string present = "true";
    cout << "Enter the size of array:";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++)
    {
        int number = numbers[i];
        for (int i = 0; number!=0 ; i++)
        {
            int digit = number % 10;
            if (digit == 7)
            {
                present = "false";
                break;
            }
            number = number / 10;
        }
    }
    if (present == "false")
    {
        cout << "BOOM!!";
    }
    else
    {
        cout << "7 is not present in the array!!";
    }
}