#include <iostream>
#include "map.h"
#include <cstring>

using namespace std;

void printMaxFreqWord(char* input) {
	map<int> freqMap;
	int currentWordStart = 0;
	int currentWordEnd = 0;
	char* bestWord = NULL;
	int bestWordFreq = 0;
	while (input[currentWordEnd] != '\0') {
		if (input[currentWordEnd] == ' ' ) {
			int currentWordLength = currentWordEnd - currentWordStart;
			char* currentWord = new char[currentWordLength + 1];
			strncpy(currentWord, input + currentWordStart,
					currentWordLength);
			currentWord[currentWordLength] = '\0';
			int freq = freqMap.get(currentWord);
			freqMap.set(currentWord, freq + 1);

			if (bestWordFreq < freq + 1) {
				bestWordFreq = freq + 1;
				bestWord = currentWord;
			}

			currentWordStart = currentWordEnd + 1;
			currentWordEnd = currentWordStart;
		} else {
			currentWordEnd++;
		}
	}
	cout << bestWord << endl;
	cout << bestWordFreq << endl;
}

int main() {
    	char a[1000];
        cin.getline (a,100);
        printMaxFreqWord(a);
}

