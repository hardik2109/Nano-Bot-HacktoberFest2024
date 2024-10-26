#include <iostream>
#include <string>
using namespace std;

// Function to expand around the center and find the longest palindrome length
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

// Function to find the longest palindromic substring
string longestPalindrome(string s) {
    if (s.empty()) return "";

    string longest;
    
    for (int i = 0; i < s.size(); i++) {
        // Odd length palindromes
        string oddPal = expandAroundCenter(s, i, i);
        if (oddPal.size() > longest.size()) {
            longest = oddPal;
        }
        
        // Even length palindromes
        string evenPal = expandAroundCenter(s, i, i + 1);
        if (evenPal.size() > longest.size()) {
            longest = evenPal;
        }
    }
    
    return longest;
}

int main() {
    string s = "babad";
    cout << "Input string: " << s << endl;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
