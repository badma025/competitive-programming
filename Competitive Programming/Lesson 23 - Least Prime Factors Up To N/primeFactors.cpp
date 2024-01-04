#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> primeFactors(n+1, 0);

    primeFactors[1] = 1;

    for (int i = 2; i <= n; i++) {
        if (primeFactors[i] == 0) {
            primeFactors[i] = i;

            for (int j = i; j <= n; j+=i){
                if (primeFactors[j] == 0) {
                    primeFactors[j] = i;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << "Smallest prime factor of " << i << ": " << primeFactors[i] << endl;
    }
}
