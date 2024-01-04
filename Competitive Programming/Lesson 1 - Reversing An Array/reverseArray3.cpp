#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;

    cout << "Enter the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << endl << "Now enter in the numbers themselves: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    int start = 0;
    int end = numberOfElements - 1;

    while (start < end) {
        int temp = numberArray[start];

        numberArray[start] = numberArray[end];
        numberArray[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < numberOfElements; i++) {
        cout << numberArray[i] << " ";
    }
}
