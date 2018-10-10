#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int myStrLen(char* str) {
    int counter = -1;
    while(str[++counter]);
    return counter;
}

bool isThereSpaceForWordInTheArray(int sentenceLength, int newWordLength) {
    return (sentenceLength + newWordLength + 1) < MAX_SIZE;
}

void shiftSentenceCharacters(char* sentence, int sentenceLength, int endIndex, int newWordLength) {
    for(int i = sentenceLength; i > endIndex; i--) {
        sentence[i + newWordLength + 1] = sentence[i];
    }
}


bool transformSentence(char* sentence, char* word) {
    int sentenceLength = myStrLen(sentence);
    int wordLength = myStrLen(word);

    if(!isThereSpaceForWordInTheArray(sentenceLength, wordLength)) {
        return false;
    }

    int indexOfSpace = 0;
    for(int i = 0; i < sentenceLength; i++) {
        if(sentence[i] == ' ') {
            indexOfSpace = i;
            break;
        }
    }

    shiftSentenceCharacters(sentence, sentenceLength, indexOfSpace, wordLength);

    for(int i = indexOfSpace + 1, k = 0; word[k] != '\0'; i++, k++) {
        sentence[i] = word[k];
    }
    sentence[indexOfSpace + wordLength + 1] = ' ';
}


int main()
{
    char sentence[MAX_SIZE];
    char word[MAX_SIZE];
    cout << "Sentence: ";
    cin.getline(sentence, MAX_SIZE);
    cout << "Word: ";
    cin.getline(word, MAX_SIZE);
    cout << endl;
    if(transformSentence(sentence, word)) {
        cout << "Transformation successful!" << endl;
        cout << "Transformed sentence: " << sentence << endl;
    } else {
        cout << "Transformation could not be performed. There's not enough space in the character array." << endl;
    }

    return 0;
}
