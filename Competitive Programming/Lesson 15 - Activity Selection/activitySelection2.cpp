#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Activity{
   int start;
   int finish;
};

bool comparison(Activity a, Activity b) {
   return (a.finish < b.finish);
}
int printActivitySequence(vector<Activity> activities) {
    sort(activities.begin(), activities.end(), comparison);
    int activityCount = 1;
    int currentActivityEndTime = activities[0].finish;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].start > currentActivityEndTime) {
            currentActivityEndTime = activities[i].finish;
            activityCount++;
        }
    }

    return activityCount;
}

int main()
{
    vector<Activity> activities = {
       {1, 2}, {3, 4},{0, 6},{5, 7},{8, 9},{5, 9}
    };


    int numActivities = printActivitySequence(activities);

    cout << numActivities;
}
