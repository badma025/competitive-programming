#include <bits/stdc++.h>

using namespace std;

bool verify(string phrase) {
   if (phrase.size() == 1) {
      return true;
   } else {
        for (int i = 1; i < phrase.size(); i++) {
            if (islower(phrase[i])){
                return false;
            }
        }
        return true;
   }
}

string change(string phrase) {
    phrase[0] = toupper(phrase[0]);
    for (int i = 1; i < phrase.size(); i++) {
        phrase[i] = tolower(phrase[i]);
    }
    return phrase;
}


int main()
{
    string phrase;

    cin >> phrase;
    bool isCaps = verify(phrase);

    if (isCaps) {
        string modified = change(phrase);
        cout << modified;
    } else {
        cout << phrase;
    }

}
