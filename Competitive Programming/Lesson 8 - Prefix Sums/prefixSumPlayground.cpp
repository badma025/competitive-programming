#include <iostream>

using namespace std;

int main(){
    int arr[] = {5, 10, 20, 7, 4, 3};
    int sum = arr[0];

    for (int i = 1; i < 6; i++) {
        arr[i] += arr[i-1];
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

}
