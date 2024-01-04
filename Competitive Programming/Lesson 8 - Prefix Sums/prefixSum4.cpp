#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> prefix = arr;

    for (int i = 1; i < prefix.size(); i++) {
        prefix[i] += prefix[i-1];
    }

    for (int i = 0; i < prefix.size(); i++) {
        cout << prefix[i] << " ";
    }
}
