#include <iostream>
#include <vector>

using namespace std;


struct Pair{
       int min;
       int max;
};

Pair getMinMax (int arr[], int numberOfElements) {
    Pair minMax;
    minMax.min = arr[0];
    minMax.max = arr[0];

    for (int i = 0; i< numberOfElements; i++) {
        if (arr[i] < minMax.min) {
            minMax.min = arr[i];
        }
        if (arr[i] > minMax.max) {
            minMax.max = arr[i];
        }
    }

    return minMax;
}



int main()
{

    Pair minMax;
    int numberOfElements;

    cout << "Enter in the amount of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter the elements themselves: ";

    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    minMax = getMinMax(numberArray, numberOfElements);
    cout << endl;
    cout << minMax.min << " " << minMax.max;
}
