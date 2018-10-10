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

    int min = arr[0];
    int max = arr[1];

    for(int i = 0 ; i < n; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "Max = " << max << "Min = " << min << endl;

    //sorting an array

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "second Max = " << arr[n-2] << " second Min = " << arr[1];
    return 0;
}
