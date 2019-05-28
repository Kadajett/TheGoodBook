#include <iostream>
using namespace std;

// String is unique
// Implement an algorithm to determine if a string has all unique characters

int main() {
	string input = "";
	size_t found;

	cout << "Enter the test string!";
	cin >> input;
	cout << "\n";

	for(int i = 0; i < input.length() - 1; i++) {
		char currentCharacter = input.at(i);
		found = input.find(currentCharacter, i+1);
		if (found!=std::string::npos) {
			cout << "Duplicate " << currentCharacter << " found at: " << found << "\n";
			return 0;
		}
		cout << "No duplicate Found!";
		return 1;
	}
	
}
