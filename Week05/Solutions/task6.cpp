#include <iostream>

using namespace std;

int main ()
{
    int number = 0;
    do
    {
        cout << "Enter a number:";
        cin >> number;
    } while(number < 10);

    int sum = 0;
    for(int i = 0; i < number; ++i)
    {
        sum += number;
    }

    cout << "Sum of the number is " << sum;
    return 0;
}
