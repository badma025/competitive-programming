#include <iostream>

using namespace std;

int main()
{
    int numberOfRows, numberOfColumns;

    cout << "Enter the number of rows in your two-dimensional array: ";
    cin >> numberOfRows;

    cout << "Enter the number of columns in your two-dimensional array: ";
    cin >> numberOfColumns;

    int twoDimensionalArray[numberOfRows][numberOfColumns];

    cout << "Now enter the elements themselves: ";

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            cin >> twoDimensionalArray[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            if (twoDimensionalArray[i][j] < 10)
              {
                  cout << twoDimensionalArray[i][j] << "  ";
              }  else {
                    cout << twoDimensionalArray[i][j] << " ";
              }
        }
        cout << endl;
    }
}
