#include <iostream>

using namespace std;

int myStrLen(char* str) {
    int counter = -1;
    while(str[++counter]);
    return counter;
}

void notifyUserForSpecialWord(int indexOfOccurrence, char* specialWord) {
    cout << "Everything's fine, cause there's " << specialWord << " at index: " << indexOfOccurrence << endl;
}

bool isSpecialWordFound(int currIndex, int specialWordLength) {
    return (currIndex + 1) == specialWordLength;
}

void mySubstrFinder(char* str, char* specialWord) {
    int spCounter = 0; // will increase by one with each i-th matching symbol to the specialWord
    int spWordLength = myStrLen(specialWord);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == specialWord[spCounter]) {
            if(isSpecialWordFound(spCounter, spWordLength)) { // will be true once we match the specialWord's final symbol
                notifyUserForSpecialWord(i - spWordLength + 1, specialWord);
                spCounter = 0; // reset the counter so it can start counting all over again for possible next occurrences
            } else {
                spCounter++;
            }
        } else {
            spCounter = 0; // it's important to reset the counter once we hit on a symbol that's not a part of the specialWord
        }
    }

}

int main()
{
    char* sentence = "I really love keks. When they ask what's the meaning of life I just say: keks, and stare deep into their eyes.";
    char* specialWord = "keks";

    cout << "Your sentence: " << sentence << endl;
    cout << "Your special word: " << specialWord << endl;

    cout << endl;
    mySubstrFinder(sentence, specialWord);
    cout << endl;

    cout << "FINISHED." << endl;
    return 0;
}
