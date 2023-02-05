#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    
    cout<<"Enter a string:";
    cin>>word1;
    cout<<"Enter another string:";
    cin>>word2;
    int count = 0;
    int count1 = word1.length();
    int count2 = word2.length();
    for(int i = 0; i < count1 ; i++ )
    {
        for(int j = 0 ; j < count2 ; j++)
        {
            if(word1[i] == word2[j])
            {
                count++;
                word2[j] == '.';
                break;
            }
        }
    }
    cout<<count;
}