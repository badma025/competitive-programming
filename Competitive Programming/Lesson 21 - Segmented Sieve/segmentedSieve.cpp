#include <bits/stdc++.h>

using namespace std;

vector <long long> primes;

void sieve(int number){
    vector <bool> isPrime(number+1, true);
    for (int i = 2; i <= number; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i*i; j <= number; j+= i) {
                isPrime[j] = false;
            }
        }
    }

}

void segmentedSieve(int l, int h) {
    int sq = sqrt(h);
    sieve(sq);

    vector <bool> range(h-l+1, true);

     for (int i = 0; i < primes.size(); i++) {
          int sm = (l/primes[i]) * primes[i];

          if (sm < l)
            sm += primes[i];

          for (int m = sm; m <= h; m += primes[i]) {
               range[m-l] = false;
          }
      }
      for (int i = 0; i < range.size(); i++) {
            if (range[i]) {
                cout << i+l << " ";
            }
          }
}

int main()
{
    int l, r;

    cin >> l >> r;

    segmentedSieve(l, r);
}
