#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void matrix()
{


    int matrix[MAX_SIZE][MAX_SIZE];
    int size = 0;

    cin >> size;

    for(size_t row = 0; row < size; ++row)
    {
        for(size_t col = 0 ; col < size; ++col)
        {
            cin>> matrix[row][col];
        }
    }

    for(size_t row = 0; row < size; ++row)
    {
        for(size_t col = 0 ; col < size; ++col)
        {
            cout << matrix[row][col] << " ";
        }
    int matrix[MAX_SIZE][MAX_SIZE];
    int size = 0;

    cin >> size;

    for(size_t row = 0; row < size; ++row)
    {
        for(size_t col = 0 ; col < size; ++col)
        {
            cin>> matrix[row][col];
        }
    }

    for(size_t row = 0; row < size; ++row)
    {
        for(size_t col = 0 ; col < size; ++col)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

        cout << endl;
    }

}
int main()
{
    char alphabet[26];

    for(char a = 'a'; a <= 'z'; a++)
    {
        alphabet[a - 'a'] = a;
    }

    for(size_t i = 0; i < 26; ++i)
    {
        cout << alphabet[i] << "   ";
    }

    char text[100];

    for(size_t i = 0; i < 100; ++i)
    {
        cin >> text[i];
        if(text[i] == '!')
        {
            break;
        }
    }

    for(size_t i = 0; text[i] != '!'; ++i)
    {
        for(size_t j = 0; j < 26; ++j)
        {
            if(text[i] == alphabet[j])
            {
                cout << j << " ";
            }
        }
    }
    return 0;
}
