#include <bits/stdc++.h>

using namespace std;

int sieve(int number){
    vector <bool> primes(number+1, true);
    int sum = 0;

    for (int i = 2; i <= number; i++){
        if (primes[i] == true) {
            sum += i;
            cout << i << " ";
        }

        for (int j = i*i; j <= number; j += i) {
            primes[j] = false;
        }
    }

    return sum;
}

int main()
{
    int number;
    cin >> number;

    int sum = sieve(number);
    cout << sum;
}
