#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }

   return gcd(b%a, a);
}


int main() {
   int a, b, c;

   cin >> a >> b >> c;

  if (c%gcd(a,b) == 0) {
      cout << "possible";
  } else {
     cout << "impossible";
  }
}
