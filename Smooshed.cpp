// Playground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;


string smooth(string);

int main()
{
	string toBeSmoothed;
	cin >> toBeSmoothed;
	cout << smooth(toBeSmoothed);
}

string smooth(string s) {
	string build;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	string morse[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
	map<char, string> letterKey;
	

	for (int i = 0; i < 26; i++) {
		letterKey.insert(pair<char, string>(alphabet[i], morse[i]));
	}

	for (int i = 0; i < s.length(); i++) {
		build += letterKey.find(s[i])->second;
	}

	return build;

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
