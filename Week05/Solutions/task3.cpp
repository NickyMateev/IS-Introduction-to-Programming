#include <iostream>

using namespace std;

int main ()
{
    int number = 0, counter = 0;
    cout << "Enter a number:";
    cin >> number;
    while (number > 0)
    {
        counter++;
        number  /=10;
    }
    cout << "length of the number is " << counter<< endl;
    return 0;
}
