#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string players;
    cin >> players;
    bool samePlayer = false;
    bool firstTime = true;
    int count = 0;
    int secCount = 0;

    for (int i = 1; i < players.size(); i++) {
        if (players[i] == players[i-1]){
            if (firstTime) {
                secCount = 2;
                firstTime = false;
            } else{
                secCount++;
            }

        } else {
            count = max(count, secCount);
            firstTime = true;
        }


    }

   if (count > 6) {
       cout << "YES";
   } else {
   cout << "NO";
   }
}
