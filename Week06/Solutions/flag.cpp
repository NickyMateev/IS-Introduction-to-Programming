#include <iostream>

using namespace std;

int main()
{
    bool isPrime = true;

    int n = 7;

    for( int i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
        }
    }

    cout << boolalpha << isPrime;
    return 0;
}

