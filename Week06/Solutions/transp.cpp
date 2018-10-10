#include <iostream>

using namespace std;


int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(size_t row = 0; row < 3; ++row)
    {
        for(size_t col = 0; col < row; ++col)
        {
            int temp = matrix[row][col];
            cout << temp;
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
        cout << endl;
    }

    for(size_t row = 0; row < 3; ++row)
    {
        for(size_t col = 0; col < 3; ++col)
        {
            cout << matrix[row][col];
        }
        cout << endl;
    }
    return 0;
};

