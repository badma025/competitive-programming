#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numberOfElements;

    cout << "Enter in the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter the numbers themselves: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    vector<bool> isVisited(numberOfElements, false);

    for (int i = 0; i < numberOfElements; i++) {
        if (isVisited[i]) {
            continue;
        }

        int count = 1;
        for (int j = i+1; j < numberOfElements; j++) {
            if (numberArray[i] == numberArray[j]) {
                isVisited[j] = true;
                count++;
            }
        }

        cout << numberArray[i] << " " << count << endl;
    }

    cout << endl;

    for (int i = 0; i < numberOfElements; i++) {
        cout << isVisited[i] << " ";
    }
}
