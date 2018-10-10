#include <iostream>

using namespace std;


int main()
{
    int n = 0;
    cout << "Enter a number:";
    cin >> n;

    for(int i = 0; i < (n / 2 + n % 2); ++i)
    {
        for(int j = 0; j < (n - 2*i)/ 2; ++j)
        {
            cout << '-';
        }

        for( int j = 0; j < 2*i + 1 ; ++j)
        {
            cout << '*';
        }

        for(int j = 0; j < (n - 2*i)/ 2; ++j)
        {
            cout << '-';
        }
        cout << endl;
    }

    for(int i = 0; i < n / 2; ++i)
    {
        cout << '|';
        for(int j = 0; j < n - 2; ++j)
        {
            cout << '-';
        }
        cout << '|';

        cout << endl;
    }
    return 0;
}
