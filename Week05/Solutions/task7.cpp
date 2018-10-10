#include <iostream>

using namespace std;

int main ()
{
    int number = 0;
    do
    {
        cout << "Enter a number:";
        cin >> number;
    } while(number < 10 || number > 200);

    for(int i = number; i > 0; --i)
    {
        if( i % 7 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
