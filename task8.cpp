#include <iostream>
using namespace std;
main()
{
    int boxes;
    int boxtime;
    int time;
    int count = 0;
    cout << "Enter number of boxes :";
    cin >> boxes;
    string colors[boxes];
    boxtime = boxes * 2;
    for (int i = 0; i < boxes; i++)
    {
        cin >> colors[i];
        if (i != 0)
        {

            if (colors[i] != colors[i - 1])
            {
                count++;
            }
        }
    }
    time = boxtime + count;
    cout << time;
}