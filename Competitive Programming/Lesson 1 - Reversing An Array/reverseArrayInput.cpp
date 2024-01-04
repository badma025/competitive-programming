#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    vector <int> numbers;

    cout << "Enter in numbers for the array and it will be reversed: ";

    cin >> number;

    while(number != -1) {
        numbers.push_back(number);
        cin >> number;
    }

    int start = 0;
    int end = numbers.size();

    while (start < end) {
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = numbers[temp];

        start++;
        end--;
    }

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
}
