#include <iostream>

using namespace std;


int main()
{

    char alphabet[26];

    for(char i = 'a'; i <= 'z'; ++i)
    {
        alphabet[i - 'a'] = i;
    }

    char text[256];
    char ch;
    int idx = 0;
    do
    {
        cin >> ch;
        text[idx++] = ch;

    } while(ch != '!');

    for(int i = 0; text[i] != '!'; ++i)
    {
        for(int j = 0; j < 26; ++j)
        {
            if(text[i] == alphabet[j])
            {
                cout << j;
            }
        }
    }
    return 0;
}
