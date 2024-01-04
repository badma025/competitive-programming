#include <iostream>

using namespace std;

void update(int l, int r, int x, int a[]) {
    for (int i = l; i <= r; i++) {
        a[i] += x;
    }
    cout << endl;
}

void printArray(int a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
}


int main()
