#include <bits/stdc++.h>

using namespace std;

int binarySearch(int l, int r, vector<int> numbers, int key) {
    int middle = (l+r)/2;
    if (l <= r) {
        if (numbers[middle] == key) {
            return middle;
        } else if (key > numbers[middle]) {
            return binarySearch(middle+1, r, numbers, key);
        } else if (key < numbers[middle]) {
            return binarySearch(l, middle-1, numbers, key);
        }
    } else {
        return -1;
    }
}

int main ()
{
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 39, 41, 47, 53, 59};

    cout << binarySearch(0, primes.size()-1, primes, 11);
}
