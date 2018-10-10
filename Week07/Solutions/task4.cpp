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

    bool isMirror = true;
    for(int i = 0, j = n - 1; i < j; ++i, --j)
    {
        if(arr[i] != arr[j])
        {
            isMirror = false;
        }
    }

    cout << isMirror;
    return 0;
}

