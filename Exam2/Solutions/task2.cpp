#include <iostream>

using namespace std;

int symbolOccurrences(char* input, char symbol) {
    char currentSymbol = input[0];
    if(currentSymbol == '\0') {
        return 0;
    }

    if(currentSymbol == symbol) {
        return 1 + symbolOccurrences(input + 1, symbol);
    } else {
        return symbolOccurrences(input + 1, symbol);
    }
}

int main()
{
    char* input = "This is a sentence.";
    cout << symbolOccurrences(input, 'e');

    return 0;
}
