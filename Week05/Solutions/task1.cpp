#include <iostream>

using namespace std;

int main ()
{
    int n = 0;
    cout << "N = ";
    cin >> n;
    int sum = 0;
    int number = 0;
    while(n > 0)
    {
        cout << "Enter a number:";
        cin >> number;
        if(number >= 10 && number <=5555)
        {
            sum +=number;
            --n;
        }

    }
    cout << "Sum = " << sum;
    return 0;
}
