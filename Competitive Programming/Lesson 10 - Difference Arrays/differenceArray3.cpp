#include <iostream>
#include <vector>

using namespace std;

vector <int> update(int l, int r, int x, vector<int> arr) {
    vector<int> updated = arr;

     for (int i = l; i <= r; i++) {
        updated[i] += x;
     }

     return updated;

}

void printArray(vector <int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector <int> arr = {10, 5, 20, 40};

    vector <int> updated = update(0,1,10, arr);
    cout << endl;
    printArray(updated);
}
