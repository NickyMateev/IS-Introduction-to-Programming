#include <iostream>


// Constants used throughout the file:
const int ARR_SIZE = 3;
const int SIZE = 100;
const int DIFF = 'a' - 'A'; // 32
const int ROWS = 4;
const int COLS = 4;

// Task 0: You are given an array of integers and number. Write a function which checks whether the array contains the number or not.

// Solutin 1(using loops):
bool containsNumber(int* arr, int size, int num)
{
	for (int i = 0; i < size; ++i)
	{
		if(arr[i] == num)
		{
			return true;
		}
	}

	return false;
}

// Solutin 2(using recursion):
bool containsNumberRec(int* arr, int size, int num)
{
	if(size == 0) // base case
	{
		return false;
	}

	if(arr[size - 1] == num) // we'll be searching from back to front for our element
	{
		return true;
	}

	return containsNumberRec(arr, size - 1, num);
}

// *** End of Task 0 ***

// Task 1: Define a recursive function which checks whether a character sequence(string, a.k.a. char array) is a palindrome or not
// str - the string itself
// size - the size of the string
bool isPalindrome(char* str, int size)
{
	if (size < 2)
		return true;
	else
	{
		if (*str == *(str + size - 1))
			return isPalindrome(str + 1, size - 2);
		else
			return false;
	}
}

int strLen(char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0' ; ++i)
	{
		count++;
	}
	return count;
}

// *** End of Task 1 ***

/* Task 2: Given a character sequence, transform the sequence so that every lower case character becomes upper case, and
   every upper case character becomes lower case.
   Example: "HelloWorld!" -> "hELLOwORLD!"
*/

// Solution 1(using loops):
void transform(char* str)
{
	int difference = 'a' - 'A';
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= difference;
			
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += difference;
		}
		
	}
}

// Solution 2(using recursion):
void transformRec(char* str)
{
	/*  *str returns the value of the first element of the char array(*str is the same as writing str[0]);
	 *  '\0' is equivalent to the boolean value false and every other character is equivalent to boolean true
	*/
	if(*str) 
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= DIFF;

		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str += DIFF;
		}

		transformRec(str + 1);
		// str is a pointer to the first element of the array, so by adding 1, we are going to get the same array but without the first character
		// (str + 1) is  really a pointer to the character after the first one
	}
	else // base case
	{
		return;
	}
}


// *** End of Task 2 ***


// Task 3: Using recursion, print the main diagonal of a (square) matrix
void printMainDiagonal(int arr[][COLS], int counter)
{
	if(counter == COLS) // base case
	{
		std::cout << std::endl;
	}
	else
	{
		std::cout << arr[counter][counter] << "; ";
		printMainDiagonal(arr, counter + 1);
	}
}

// *** End of Task 3 *** 



int main()
{
	// Task 0 example:
	int arr[ARR_SIZE] = { 1,2,3 };
	int var = 2;
	std::cout << var << " is " << (containsNumberRec(arr, ARR_SIZE, var) ? "" : "NOT ") << "in the array" << std::endl;

	// Task 1 example:
	char str[SIZE];
	std::cout << "Input: ";
	std::cin >> str;
	if (isPalindrome(str, strLen(str)))
	{
		std::cout << "Input IS palindrome." << std::endl;	
	}
	else
	{
		std::cout << "Input IS NOT palindrome." << std::endl;	
	}

	// Task 2 example:
	char str2[SIZE];
	std::cout << "Input: ";
	std::cin >> str2;
	transformRec(str2);
	std::cout << "After transformation: " << str2 << std::endl;

	// Task 3 example:
	int matrix[ROWS][COLS] = { {1,2,3,4}, {5,6,7,8,}, {9,10,11,12}, {13,14,15,16} };
	printMainDiagonal(matrix, 0);





    return 0;
}

