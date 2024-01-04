#include <bits/stdc++.h>

using namespace std;

vector <int> bubbleSort(vector<int> primes, int n) {
    if (n == 1) {
        return primes;
    }

    int count = 0;

    for (int i = 0; i < n-1; i++){
        if (primes[i] > primes[i+1]){
            swap(primes[i], primes[i+1]);
            count++;
        }
    }

    if (count==0){
        return primes;
    }

    return bubbleSort (primes, n-1);
}

int main()
{
    vector<int> primeNumbers = { 59, 61, 41, 11, 37, 67, 13, 19, 41, 59, 47, 2, 31, 97, 89, 5, 61};
    vector<int> primes = bubbleSort(primeNumbers, primeNumbers.size());

     for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
     }
}


