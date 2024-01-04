#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numberOfElements;

    cout << "Enter the number of elements in your array: ";
    cin >> numberOfElements;

    int numberArray[numberOfElements];

    cout << "Now enter in the elements themselves: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> numberArray[i];
    }

    vector<bool> isVisited(numberOfElements, false);

    for (int i = 0; i < numberOfElements; i++) {
        if (isVisited[i]) {
            continue;
        }

        int count = 1;
        isVisited[i] = true;

        for (int j = i+1; j < numberOfElements; j++) {
            if (numberArray[i] == numberArray[j]) {
                count++;
                isVisited[j] = true;
            }
        }

        cout << numberArray[i] << " " << count << endl;
    }

    cout << endl;

    for (int i=0; i < numberOfElements; i++) {
        cout << isVisited[i] << " ";
    }
}
