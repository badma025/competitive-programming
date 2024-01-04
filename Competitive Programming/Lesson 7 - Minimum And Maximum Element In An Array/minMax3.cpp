#include <iostream>

using namespace std;

struct Pair {
   int min;
   int max;
};

int main() {
    Pair minmax;
     int arr[] = {1, 2, 3, 4, 5, 2, 10, -1, 100000};
     int size = 9;

     minmax.min = arr[0];
     minmax.max = arr[0];

     for (int i = 0; i < size; i++) {
        if (arr[i] < minmax.min) {
            minmax.min = arr[i];
        }
        if (arr[i] > minmax.max) {
            minmax.max = arr[i];
        }
     }

     cout << minmax.min << endl << minmax.max;
}
