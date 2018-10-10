#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main()
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
            matrix[row][col] = matrix[row][col]*matrix[row][col];
        }
    }


    for(size_t row = 0; row < size; ++row)
    {
        for(size_t col = 0 ; col < size; ++col)
        {
            cout << matrix[row][col];
        }
        cout << endl;
    }

    return 0;
}

