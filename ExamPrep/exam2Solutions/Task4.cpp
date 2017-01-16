#include <iostream>

const char* WORD = "izdislav";

// Solution 1:
int containsWord(char* str)
{
	int var = 0, j = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		var = i; // we'll use var only to remember the first index of the occurrence
		j = 0;
		while (WORD[j] != '\0' && str[i] != '\0')
		{
			if(WORD[j] != str[i])
			{
				break;
			}

			if(WORD[j + 1] == '\0') // if true, it means we've reached the end of the word and found an occurrence
			{
				return var;
			}

			j++;
			i++;
		}

		if (str[i] == '\0')
		{
			break;
		}
	}

	return -1;
}

// Solution 2: Absolutely the same as Solution 1, except that we pass the word that's we're searching for as a second argument
int containsWord2(char* str, char* word)
{
	int var = 0, j = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		var = i; // we'll use var only to remember the first index of the occurrence
		j = 0;
		while (word[j] != '\0' && str[i] != '\0')
		{
			if(word[j] != str[i])
			{
				break;
			}

			if(word[j + 1] == '\0') // if true, it means we've reached the end of the word and found an occurrence
			{
				return var;
			}

			j++;
			i++;
		}
		
		if (str[i] == '\0')
		{
			break;
		}
	}

	return -1;
}



int main()
{
	// Demonstration:
	char str[] = "123izdislavcho";
	std::cout << "Result index: " << containsWord(str) << std::endl;


    return 0;
}

