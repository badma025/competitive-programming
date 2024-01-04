#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);

    for (int i = 2; i <= n; i++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[i]) {
            cout << i << " ";
            for (int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
}

// Driver Code
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
