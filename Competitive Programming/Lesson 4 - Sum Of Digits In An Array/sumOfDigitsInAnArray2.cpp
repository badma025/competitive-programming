#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;
    int sum = 0;

    cout << "Enter in the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter in the elements themselves: ";

    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    for (int i = 0; i < numberOfElements; i++) {
        sum += numberArray[i];
    }

    cout << endl << sum;
}
