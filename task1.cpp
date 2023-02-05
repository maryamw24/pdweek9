#include <iostream>
using namespace std;
main()
{
    string fruit;
    int quantity;
    int price;
    cout<<"Enter the fruit name:";
    cin>>fruit;
    cout<<"Enter quantity of fruit in kgs:";
    cin>>quantity;
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int prices[4] = {60,70,40, 30};
    int count1 = sizeof(prices[4] /sizeof(prices[0]));
    for(int i = 0; i < count1 ; i++)
    {
        if (fruits[i] == fruit)
        {
            price = quantity*prices[i];
        }

    }
    cout<<"Total :"<<price;
}