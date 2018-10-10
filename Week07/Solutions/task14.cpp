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


    int sumOver = 0;
    for(size_t row = 0; row < size - 1; ++row)
    {
        for(size_t col = 0 ; col < size - row - 1; ++col)
        {
            sumOver += matrix[row][col];
        }
    }


    cout << "Sum over diagonal    " << sumOver << endl;


    int sumUnder = 0;
    for(size_t row = 1; row < size; ++row)
    {
        for(size_t col = size - row ; col < size; ++col)
        {
            sumUnder += matrix[row][col];
        }
    }


    cout << "Sum under diagonal  " << sumUnder;


    return 0;
}



