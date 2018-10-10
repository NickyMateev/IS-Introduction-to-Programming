#include <iostream>

using namespace std;

const int ROW = 6;
const int COL = 5;

int main()
{

    int matrix[ROW][COL];
    for(int i = 0; i < ROW; ++i)
    {
        for( int j = 0; j < COL; ++j)
        {
            cout << "matrix ["<< i <<"]["<< j<<"]";
            cin >> matrix[i][j];
        }
    }

    int min = matrix[0][0];

    int max = matrix[0][0];

    for(int row = 0; row < ROW; ++row)
    {
        for( int col = 0; col < COL; ++col)
        {
            if(min > matrix[row][col])
            {
                min = matrix[row][col];
            }

            if(max < matrix[row][col])
            {
                max = matrix[row][col];
            }
        }
    }

    cout << "MAX = "<< max;
    cout << "MIN = "<< min;
    return 0;
}

