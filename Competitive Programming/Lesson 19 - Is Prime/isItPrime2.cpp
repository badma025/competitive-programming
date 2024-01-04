#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;

    cin >> number;

    if (number == 1 || number == 0) {
        cout << "no";
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
}
