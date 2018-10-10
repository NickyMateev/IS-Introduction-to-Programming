#include <iostream>

using namespace std;


int main()
{
    int n = 0;
    cout << "Enter a number:";
    cin >> n;
    for(int i = 1 ; i <= n; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            cout << '$' << ' ';
        }
        cout << endl;
    }
    return 0;
}
