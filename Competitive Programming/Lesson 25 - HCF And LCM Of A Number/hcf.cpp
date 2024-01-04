#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int hcf = 1;

    for (int i = 1; i <= max(x, y); i++) {
            if (x % i == 0 && y%i == 0) {
                hcf = i;
            }
    }

    cout << hcf;
}
