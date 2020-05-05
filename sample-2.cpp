/*
	A program that counts letters and words in a sentence
*/

#include <iostream>
using namespace std;

int main() {
	char str[100];

	cout << "Enter a sentence of maximum 99 letters: ";
	cin.get(str, 100);

	int letters, words;
	letters = 0;
	words = 0;
	bool word_started = false;

	for (int i = 0; i < 100; i++) {
		char c = str[i];

		if (c == '\0') {
			break;
		} else if (c == ' ' || c == '\t') {
			if (word_started == true) {
				words++;
				word_started = false;
			}
		} else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letters++;
			word_started = true;
		} else {
			word_started = true;
		}
	}

	if (letters > 0 && words <= 0) {
		words = 1;
	}

	cout << "Letters: " << letters << endl;
	cout << "Words: " << words << endl;
}