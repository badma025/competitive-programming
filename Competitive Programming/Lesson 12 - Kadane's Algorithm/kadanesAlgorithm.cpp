#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maximum = arr[0];


    for (int i = 1; i < arr.size(); i++) {
        arr[i] = max(arr[i], arr[i] + arr[i-1]);

        if (arr[i] > maximum) {maximum = arr[i];};
    }

    cout << maximum;
}
