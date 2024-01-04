#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> heights;

    int n;
    cin >> n;

    int height;

    for (int i = 0; i < n; i++) {
        cin >> height;
        heights.push_back(height);
    }

    int minHeight = heights[0];
    int maxHeight = heights[0];
    int minHeightIndex = 0;
    int maxHeightIndex = 0;

    for (int i = 0; i < heights.size(); i++) {
        if (heights[i] <= minHeight) {
            minHeight = heights[i];
            minHeightIndex = i;
        } if (heights[i] > maxHeight) {
             maxHeight = heights[i];
             maxHeightIndex = i;
        }
    }

    int numSwaps = 0;

    numSwaps += (heights.size() - 1 - minHeightIndex);
    numSwaps += (maxHeightIndex);

    if ((maxHeightIndex >= heights.size()/2 && minHeightIndex <= heights.size()/2) || (maxHeightIndex < heights.size()/2 && minHeightIndex < heights.size()/2) || (maxHeightIndex > heights.size()/2 && minHeightIndex > heights.size()/2))
        numSwaps--;
    cout << numSwaps;
}
