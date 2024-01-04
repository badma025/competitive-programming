#include <bits/stdc++.h>

using namespace std;

vector <int> bubbleSort(vector<int> numbers, int n) {
    int count = 0;

    if (n == 1) {
        return numbers;
    }

       for (int i = 0; i < n-1; i++) {
           if (numbers[i+1] < numbers[i]) {
               swap(numbers[i+1], numbers[i]);
               count++;
           }
       }

       if (count == 0) {
        return numbers;
       }

       return bubbleSort(numbers, n-1);
}


int main () {
    vector <int> numbers = {47, 19, 48, 28, 14, 76, 43, 85};

    vector<int> sorted = bubbleSort(numbers, numbers.size());

    for (int i = 0; i < sorted.size(); i++){
        cout << sorted[i] << " ";
    }
}
