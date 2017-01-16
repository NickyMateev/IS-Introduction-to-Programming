#include <iostream>

const int SIZE = 8;

// Solution 1(using a reference):
void countRef(int* arr, int size, int elem, int& occurrences)
{
	if(size > 0)
	{
		if(arr[size - 1] == elem)
		{
			occurrences++;
		}

		countRef(arr, size - 1, elem, occurrences);
	}
	
}


// Solution 2(using a pointer):
void countPtr(int* arr, int size, int elem, int* occurrences)
{
	if(size > 0)
	{
		if(arr[size - 1] == elem)
		{
			(*occurrences)++;
		}

		countPtr(arr, size - 1, elem, occurrences);
	}
	
}


int main()
{
	// Demonstration:
	int arr[SIZE] = { 1,2,2,3,4,2,6,1 };
	int elem = 2;
	int occurrences = 0;


	countRef(arr, SIZE, elem, occurrences);      // <--- Solution 1
	// countPtr(arr, SIZE, elem, &occurrences);     <--- Solution 2

	std::cout << "Number of occurrences: " << occurrences << std::endl;

    return 0;
}

