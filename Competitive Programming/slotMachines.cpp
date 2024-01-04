#include <bits/stdc++.h>

using namespace std;

bool comparison(pair<int,int> a, pair<int,int> b) {
   return (a.second > b.second);
}

int main()
{
    int n, bf, bi;
    cin >> n >> bf >> bi;

    vector <pair<int, int>> slotMachines(n);

    for (int i = 0; i < n; i++) {
        cin >> slotMachines[i].first; // cost
        cin >> slotMachines[i].second; // reward
    }

    sort (slotMachines.begin(), slotMachines.end(), comparison);
    int numberOfTries = 0;

    for (int i = 0; i < slotMachines.size(); i++) {
        if (slotMachines[i].first <= bi) {
            while (bi <= bf) {
                bi -= slotMachines[i].first;
                bi += slotMachines[i].second;
                numberOfTries++;
            }
        }
        break;
    }

    cout << numberOfTries;
}
