/*

CS 216
Created Dec 13

*/

#include <iostream>
#include <string>
//we can not using namespace std;
// this variable will count the number of times isPalindrome is called

int count = 0;  

bool isPalindrome(const std::string& s){
    count++; //increment the count when entering in function
    if (s.size() <= 1) // Base case
        return true;
    else if (s[0] != s[s.size() - 1]) // Base case
        return false;
    else
        return isPalindrome(s.substr(1, s.size() - 2));
}

int main()
{

    std::cout << "Enter a string: ";
    std::string s;
    getline(std::cin, s);
    if (isPalindrome(s))
        std::cout << s << " is a palindrome" << std::endl;
    else
        std::cout << s << " is not a palindrome" << std::endl;
    std::cout<<"isPalindrome function is called "<<count<<" times."<< std::endl;
    return 0;

}