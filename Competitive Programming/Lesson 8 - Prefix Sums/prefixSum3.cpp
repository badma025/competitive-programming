#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;

    cout << "Enter in the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];
    int prefixArray[numberOfElements];

    cout << "Now enter in the elements themselves: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    for (int i = 0; i < numberOfElements; i++) {
        prefixArray[i] = numberArray[i];
    }



    for (int i = 1; i < numberOfElements ; i++) {
        prefixArray[i] += prefixArray[i - 1];
    }

    for (int i = 0; i < numberOfElements; i++) {
        cout << prefixArray[i] << " ";
    }
}
