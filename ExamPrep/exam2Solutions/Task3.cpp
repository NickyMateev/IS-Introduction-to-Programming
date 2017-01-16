#include <iostream>

const int SIZE = 8;

void replace(int* arr, int size, int oldElem, int newElem)
{
	if(size > 0)
	{
		if(arr[size - 1] == oldElem)
		{
			arr[size - 1] = newElem;
		}
		replace(arr, size - 1, oldElem, newElem);
	}
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
}


int main()
{
	// Demonstration:
	int arr[SIZE] = { 1,2,2,3,4,2,6,1 };
	int oldElem = 2;
	int newElem = 0;

	replace(arr, SIZE, oldElem, newElem);
	printArr(arr, SIZE);


    return 0;
}

