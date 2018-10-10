#include <iostream>

using namespace std;

int main ()
{
    int number = 0;
    int sum = 0, counter = 0;
    do
    {
        cout << "Enter a number :";
        cin >> number;
        if( number >= 1 && number <=200)
        {
            sum += number;
            ++counter;
        }
    } while(number > 0);

    cout << "Count of the number :" << counter << endl;
    cout << "Sum of the number :" << sum << endl;
    cout << "Average of the number :" << sum / counter << endl;
    return 0;
}
