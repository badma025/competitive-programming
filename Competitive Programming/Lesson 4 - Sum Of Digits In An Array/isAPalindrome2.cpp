#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    bool isAPalindrome;

    cout << "Enter in a string: ";
    cin >> word;

    int end = word.length() - 1;
    int start = 0;

    while (start < end) {
        if (word[start] != word[end]) {
            isAPalindrome = false;
            break;
        }
        isAPalindrome = true;
        start++;
        end--;
    }

    cout << endl;
    isAPalindrome ? cout << word << " is a palindrome." : cout << word << " is not a palindrome.";
}
