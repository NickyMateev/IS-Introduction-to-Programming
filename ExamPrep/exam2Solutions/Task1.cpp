#include <iostream>

// Solution 1(without recursion):
bool isPowerOfTwo(int n)
{
	if(n <= 0)
	{
		return false;
	}

	while (n % 2 == 0)
	{
		n /= 2;
	}

	return (n == 1) ? true : false;
}

// Solution 2(with recursion):
bool isPowerOfTwoRec(int n)
{
	if(n == 1)
	{
		return true;
	}

	if((n <= 0) || (n % 2 != 0))
	{
		return false;
	}

	return isPowerOfTwoRec(n / 2);
}




int main()
{
	// Demonstration:
	for (int i = 0; i < 20; ++i)
	{
		std::cout << i << " <---> " << (isPowerOfTwoRec(i) ? "True" : "False") << std::endl;
	}

    return 0;
}

