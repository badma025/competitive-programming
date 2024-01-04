#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector <int> results;
    results.reserve(t);

    while (t--) {
        int a, b;
        cin >> a >> b;
        int numMoves = 0;

        if (a % b == 0) {
           // cout <<0<< endl;
           results.push_back(0);
            continue;
        }

        while (a % b != 0) {
            a++;
            numMoves++;
        }

        //cout << numMoves << endl;
        results.push_back(numMoves);
    }

    cout << endl;

    for (const auto& result : results) {
        cout << result << "\n";
    }
}
