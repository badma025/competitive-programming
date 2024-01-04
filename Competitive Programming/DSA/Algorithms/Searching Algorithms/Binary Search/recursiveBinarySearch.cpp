#include <bits/stdc++.h>

using namespace std;

int binarySearch(int l, int r, int number, vector<int> numbers) {
    if (l <= r) {
        int middle = (l+r)/2;
        if (number == numbers[middle])
            return middle;

        if (number > numbers[middle])
            return binarySearch(middle+1, r, number, numbers);

        else
            return binarySearch(l, middle-1, number, numbers);
    }

    return -1;
}

int main()
{
    vector<int> numbers {2, 3, 5, 7, 11, 13, 17, 19, 21, 23, 29};

    int position = binarySearch(0, numbers.size()-1, 29, numbers);

    (position == -1)
    ?  cout << "Element at position not found."
    :  cout << "Element found at position " << position;
}
