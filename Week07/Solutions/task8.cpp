#include <iostream>

using namespace std;


int main()
{

    int size = 0;
    cout << "Size = ";
    cin >> size;
    int matrix[100][100];
    for(int i = 0; i < size; ++i)
    {
        for( int j = 0; j < size; ++j)
        {
            cout << "matrix ["<< i <<"]["<< j<<"]";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < size; ++i)
    {
        cout << matrix[i][i];
    }

    cout <<endl;

    for(int i = 0, j = size -1; i < size; ++i, --j)
    {
        cout << matrix[i][j];
    }

    return 0;
}

