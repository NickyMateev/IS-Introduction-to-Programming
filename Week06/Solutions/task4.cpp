#include <iostream>

using namespace std;


int main()
{
    int n = 0;
    cout << "Enter a number:";
    cin >> n;
    cout << '+';
    for(int i = 0; i < n -2; ++i)
    {
        cout << '-';
    }
    cout << '+';
    cout << endl;

    for(int i = 0; i < n -2; ++i)
    {
        cout << '|';
        for( int j = 0 ; j < n -2; ++j)
        {
            cout << '-';
        }
        cout << '|';
        cout << endl;
    }

    cout << '+';
    for(int i = 0; i < n -2; ++i)
    {
        cout << '-';
    }
    cout << '+';
    cout << endl;
    return 0;
}
