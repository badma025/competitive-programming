#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isItPrime(int number) {
    if (number == 1)
        return false;

   for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main ()
{
    int number;

    cin >> number;

     if (!isItPrime(number)) {
        cout << "NO";
     } else {
     cout << "YES";
     }

}
