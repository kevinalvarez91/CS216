/*

CS216
Created Dec 13
*/
#include <iostream>
#include <string.h>
using namespace std;

// Function to get the reverse
void reverseDisplay(const string &s)
{
	if (s.size() == 0)
	{
		return;
	}
	reverseDisplay(s.substr(1));
	cout << s[0];
}

// test program
int main()
{
	string str;
	cout << "Enter a string: ";
	cin >> str;
	cout << "The reveral of " << str << " is ";
	reverseDisplay(str);
	return -0;
}
