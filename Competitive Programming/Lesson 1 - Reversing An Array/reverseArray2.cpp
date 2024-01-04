#include <iostream>

using namespace std;

int main()
{
    int numberOfElements;
    int number;

    cout << "Enter in the amount of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter in the elements themselves: ";

    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    int start = 0;
    int temp;
    int end = numberOfElements - 1;

    while (start < end) {
        temp = numberArray[end];

        numberArray[end] = numberArray[start];
        numberArray[start] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < numberOfElements; i++) {
        cout << numberArray[i] << " ";
    }


}
