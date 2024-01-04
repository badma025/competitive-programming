#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1,2,3,4,5};

    int start = 0;
    int end = 4;

    while (start < end) {
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }
}
