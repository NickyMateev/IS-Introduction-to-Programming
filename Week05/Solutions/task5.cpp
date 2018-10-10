#include <iostream>

using namespace std;

int main ()
{
    for(int i = 102; i < 999; ++i)
    {
        if(i% 10 != i/100 && i % 10 != (i % 100) / 10 && (i % 100) / 10 != i / 100)
        {
            cout << i << endl;
        }
    }
    return 0;
}
