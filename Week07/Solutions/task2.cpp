#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main()
{
    int n = 0;
    int arr[MAX_SIZE];

    cout << "Enter a size of array";
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    int number = 0;
    cout << "Enter a nubmer   ";
    cin >> number;
    int counter = 0;

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == number)
        {
            ++counter;
            cout << i << "  ";
        }
    }
    cout << "Count of number " << number<< " is " << counter;
    return 0;
}
