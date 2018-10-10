#include <iostream>

using namespace std;

int main ()
{
    int number = 0;
    cout << "Enter a number:";
    cin >> number;

    for(int i = 1; i <= number; ++i)
    {
        if( number % i == 0)
        {
            cout << i << " " ;
        }
    }
    return 0;
}
