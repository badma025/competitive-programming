#include <bits/stdc++.h>

using namespace std;

int main()
{

    int level;
    set<int> levels;

    int n;
    cin >> n;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> level;
        levels.insert(level);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> level;
        levels.insert(level);
    }

    if (levels.size() >= n) {
        cout << "I become the guy.";
    }   else {
         cout << "Oh, my keyboard!";
    }
}
