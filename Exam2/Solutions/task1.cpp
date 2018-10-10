#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

bool isCharADigit(char symbol) {
    return (symbol >= '0') && (symbol <= '9');
}

char transformCharDigit(char charDigit) {
    int digit = charDigit - '0';
    int newDigit = 9 - digit;
    char newCharDigit = '0' + newDigit;

    return newCharDigit;
}

void tranformString(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(isCharADigit(str[i])) {
            str[i] = transformCharDigit(str[i]);
        }
    }
}

int main()
{
    char str[MAX_SIZE];
    cin.getline(str, MAX_SIZE);
    cout << "Before: " << str << endl;
    tranformString(str);
    cout << "After: " << str << endl;

    return 0;
}
