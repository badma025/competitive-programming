#include <iostream>
#include <vector>

using namespace std;

struct Pair {
     int minimum;
     int maximum;
  };

Pair calculateMinMax(int arr[], int size) {
    Pair minMax;
    minMax.minimum = arr[0];
    minMax.maximum = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < minMax.minimum) {
            minMax.minimum = arr[i];
        }
        if (arr[i] > minMax.maximum) {
            minMax.maximum = arr[i];
        }
    }

    return minMax;
}

int main() {

  Pair minMax;

  int numberArray[] = {5, 4, 3, 2, 1, 0};

  minMax = calculateMinMax(numberArray, 6);

  cout << minMax.minimum << " " << minMax.maximum;
}
