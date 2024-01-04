#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    bool isAPalindrome;
    cout << "Enter in a word: ";
    getline(cin, word);

    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        if (word[start] != word[end]) {
            isAPalindrome = false;
            break;
        } else {
            isAPalindrome = true;
        }
        start++;
        end--;
    }

    cout << isAPalindrome;
}
