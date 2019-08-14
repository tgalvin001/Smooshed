// Smooshed.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <map>
using namespace std;


string smoosh(string);

int main()
{
	string toBeSmoothed;
	cin >> toBeSmoothed;
	cout << smooth(toBeSmoothed);
}

string smoosh(string s) {
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

	
