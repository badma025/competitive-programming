#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;

    for (int x = 1; x <= 100; x++) {
        if ((x % 2 == 0) ^ (x % 3 == 0) ^ (x % 5 == 0)) {
            count++;
        }
    }

    cout << "Number of integers divisible by either 2, 3, or 5: " << count << endl;

    return 0;
}
