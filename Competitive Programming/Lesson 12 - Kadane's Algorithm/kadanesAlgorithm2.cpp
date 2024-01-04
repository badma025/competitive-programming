#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};


    int arrayMax = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        arr[i] = max(arr[i], arr[i] + arr[i - 1]);

        if (arr[i] > arrayMax) {
            arrayMax = arr[i];
        }
    }

    cout << arrayMax;

}
