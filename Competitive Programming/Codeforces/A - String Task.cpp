#include <iostream>
#include <string>
#include <ctype.h>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    string phrase;
    string dot = ".";

    cin >> phrase;

    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);

    for (int i = 0; i < phrase.size(); i++) {
        if (phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u') {
             phrase.erase(i, i+1);
        }
    }

    for (int i = 0; i < phrase.size(); i++) {
        if ((phrase[i+1] != 'a') && (phrase[i+1] != 'e') && (phrase[i+1] != 'i') && (phrase[i+1] != 'o') && (phrase[i+1] != 'u')) {
            phrase.insert(i, dot);
        }
    }

    cout << phrase;
}
