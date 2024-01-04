#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int divisor = 2;

    while (n != 1) {
        if (n % divisor == 0) {
            n /= divisor;
            cout << divisor << " ";
        } else {
            divisor++;
        }
    }
}
