#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a == 0)
    return b;

  return gcd(b%a, a);
}

int main()
{
    int n;
    cin >> n;

    int totent = 0;

    if (n==1) {
           cout << 1;
        return 0;

    }

    for (int i = 1; i < n; i++) {
        if (gcd(i, n) == 1) {
            totent++;
        }
    }

    cout << totent;
}
