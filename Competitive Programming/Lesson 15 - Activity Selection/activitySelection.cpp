#include <iostream>
#include <vector>

using namespace std;

int main() {

   // we start by initialising the vectors
   // assuming they are sorted by finish time
   vector <int> start = { 1, 3, 0, 5, 8, 5 };
   vector <int> finish = { 2, 4, 6, 7, 9, 9 };

   vector <int> activities;
   int currentActivityFinishTime = finish[0];

   // the first activity always gets selected
   activities.push_back(0);

   for (int i = 1; i < start.size(); i++) {
        if (start[i] >= currentActivityFinishTime) {
            activities.push_back(i);
            currentActivityFinishTime = finish[i];
        }
   }

   for (int i = 0; i < activities.size(); i++) {
        cout << activities[i] << " ";
   }

}
