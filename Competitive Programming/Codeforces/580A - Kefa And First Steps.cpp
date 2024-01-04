#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> numbers(n);


    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int currCount = 1;
    int maxCount = 1;

    for (int i = 1; i < n; i++) {
        if (numbers[i] >= numbers[i-1]) {
            currCount++;
        } else {
            maxCount = max(currCount, maxCount);
            currCount = 1;
        }
    }

    maxCount = max(currCount, maxCount);
    cout << maxCount;
}
