#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase;
    int count;

    cout << "Enter in a string: ";
    getline(cin, phrase);

    int numberOfRows = 3;
    int numberOfColumns = 5;
    string phraseArray[numberOfRows][numberOfColumns];

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            string character = phrase.substr(count, 1);
            phraseArray[i][j] = character;
            count++;
        }
    }

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            cout << phraseArray[i][j] << " ";
        }
        cout << endl;
    }
}
