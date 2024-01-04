#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;

    cout << "Enter the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter in the elements themselves: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    for (int i = 1; i < numberOfElements; i++) {
        numberArray[i] += numberArray[i-1];
    }

    for (int i = 0; i < numberOfElements; i++) {
        cout << numberArray[i] << " ";
    }
}
