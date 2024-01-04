#include <iostream>

using namespace std;

struct Pair {
   int min;
   int max;
};

int main()
{
    Pair minMax;
    int numberOfElements;

    cout << "Enter the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter the elements themselves: ";
    for (int i = 0; i< numberOfElements; i++)
    {
        cin >> numberArray[i];
    }

    minMax.min = numberArray[0];
    minMax.max = numberArray[0];

    for (int i = 0; i < numberOfElements; i++) {
        if (numberArray[i] > minMax.max) {
            minMax.max = numberArray[i];
        } if (numberArray[i] < minMax.min) {
            minMax.min = numberArray[i];
        }
    }

    cout << minMax.min << endl << minMax.max;
}
