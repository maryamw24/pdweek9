#include <iostream>
using namespace std;
int function(char pin);
main()
{
    string pincode;
    int count = 0;
    int count1 = 0;
    string moves[10] = {"shimmy","shake","piroutee","slide","box Step", "Headspin", "Dosado", "pop","lock","Abesque"};
    int size = 4;
    cout << "Enter your pincode:";
    cin >> pincode;
    string isvalid = "true";
    for (int i = 0; i < size; i++)
    {
        if (pincode[i] == '0' || pincode[i] == '1' || pincode[i] == '2' || pincode[i] == '3' || pincode[i] ==  4 || pincode[i] ==  5 || pincode[i] ==  6 || pincode[i] ==  7|| pincode[i] ==  8|| pincode[i] ==  9 )
        {
            isvalid = "true";
        }
    }
    if (isvalid == "true")
    {
        for(int i = 0; i < size; i++)
        {
            char pin = pincode[i];
            count = function(pin);
            int final = i + count;
            if (final > 9)
            {
                final  = count1 ;
                count1++;
            }
            cout<<moves[final]<<",";

        }
    
    }
    else 
    {
        cout<<"Invalid Pincode!!";
    }
}

int function(char pin)
{
    int result;
    if (pin == '0')
    {
        result = 0;
    }
    else if (pin == '1')
    {
        result = 1;
    }
    else if (pin == '2')
    {
        result = 2;
    }
    else if (pin == '3')
    {
        result = 3;
    }
    else if (pin == '4')
    {
        result = 4;
    }
    else if (pin == '5')
    {
        result = 5;
    }
    else if (pin == '6')
    {
        result = 6;
    }
    else if (pin == '7')
    {
        result = 7;
    }
    else if (pin == '8')
    {
        result = 8;
    }
    else if (pin == '9')
    {
        result = 9;
    }
    return result;
}