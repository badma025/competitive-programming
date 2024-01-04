#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    int numberOfRows, numberOfColumns, numberLimit, randomNumber;

    cout << "Enter in the number of rows in your array: ";
    cin >> numberOfRows;

    cout << "Now enter in the number of columns in your array: ";
    cin >> numberOfColumns;

    cout << "Now enter the limit to which you want your numbers to generate: ";
    cin >> numberLimit;

    int twoDimensionalArray[numberOfRows][numberOfColumns];

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            randomNumber = (rand() % numberLimit) + 1;
            twoDimensionalArray[i][j] = randomNumber;
        }
    }

    cout << endl;

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            cout << twoDimensionalArray[i][j] << " ";
        }
        cout << endl;
    }
}
