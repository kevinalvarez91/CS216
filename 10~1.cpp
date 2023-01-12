
#include <iostream>
#include <unordered_map>

using namespace std;

/*function prototypes, must include in order for code to compile*/

bool isAnagram(const string& s1, const string& s2);
int main ();

bool isAnagram(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    unordered_map<char, int> charCounts;
    for (char c : s1) {
        charCounts[c]++;
    }

    for (char c : s2) {
        if (--charCounts[c] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    if (isAnagram(s1, s2)) {
        cout << "The two strings are anagrams." << endl;
    } else {
        cout << "The two strings are not anagrams." << endl;
    }

    return 0;
}
