#include <iostream>

using namespace std;


int main()
{
    //въвеждане на масива и зануляване
    //за всяка една буква по една клетка
    int alphabet[26];

    for(int i = 0; i < 26; ++i)
    {
        alphabet[i] = 0;
    }

    //въвеждане на техт
    //въвеждането спира при знак !
    char text[256];
    char ch;
    int idx = 0;
    do
    {
        cin >> ch;
        text[idx++] = ch;

    } while(ch != '!');


    //минаване през целият текст
    for(int i = 0; text[i] != '!'; ++i)
    {
        for(int j = 0; j < 26; ++j)
        {
            if(text[i] == 'a' + j)
            {
                alphabet[j]++;
            }
        }
    }


    // извеждане на резултатите
    for(int i = 0; i < 26; i++)
    {
        cout << (char)('a' + i) <<"   "<<  alphabet[i] << endl;
    }
    return 0;
}

