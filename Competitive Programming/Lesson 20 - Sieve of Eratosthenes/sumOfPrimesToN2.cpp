#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long sieve(int n) {
    vector <bool> primes (n+1, true);
    long long sum = 0;

    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            sum += i;
        }

        for (int j = i*i; j <= n; j += i) {
            if (primes[j]) {
                primes[j] = false;
            }

        }
    }

    return sum;
}

int main(){

       int n = 10;

       cout << sieve(n);

}
