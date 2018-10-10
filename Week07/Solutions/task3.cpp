#include <iostream>
#include <cmath>
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



    int sum = 0;
    int avg = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    avg = sum / n;

    int minNum = arr[0];
    int minAvg = abs(arr[0] - avg);

    for(int i = 0; i < n; ++i)
    {
        if(abs(arr[i] - avg) < minAvg)
        {
            minNum = arr[i];
        }
    }

    int lessArr[MAX_SIZE];
    int lessSize = 0;
    int moreArr[MAX_SIZE];
    int moreSize = 0;

    for(int i = 0; i < n; ++i)
    {
        if(arr[i] < minNum)
        {
            lessArr[lessSize] = arr[i];
            ++lessSize;
        }

        if(arr[i] > minNum)
        {
            moreArr[moreSize] = arr[i];
            ++moreSize;
        }
    }


    for(int i = 0; i < lessSize; ++i)
    {
        cout << lessArr[i];
    }

    cout << endl;

        for(int i = 0; i < moreSize; ++i)
    {
        cout << moreArr[i];
    }

    cout << endl;
    return 0;
}
