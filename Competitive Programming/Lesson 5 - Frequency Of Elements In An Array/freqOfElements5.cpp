#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers = {1, 1, 2, 3, 6, 6, 6, 6, 6, 5};
    vector <bool> isVisited (numbers.size(), false);

    for (int i = 0; i < numbers.size(); i++) {
        if (isVisited[i]) {
            continue;
        }

        int count = 1;

        for (int j = i+1; j < numbers.size(); j++) {
            if (numbers[i] == numbers[j]) {
                 count++;
                 isVisited[j] = true;
            }
        }
        cout << numbers[i] << " " << count << endl;
    }
}
