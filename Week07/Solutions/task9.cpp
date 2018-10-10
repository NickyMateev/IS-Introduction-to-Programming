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


    int sum = 0;
    int counter = 0;
    for(int i = 0; i < size; ++i)
    {
        for( int j = 0; j < size; ++j)
        {
            sum +=matrix[i][j];
            ++counter;
        }
    }

    cout << "SUM" << sum << endl;
    cout << "AVG" << sum/counter;

    return 0;
}


