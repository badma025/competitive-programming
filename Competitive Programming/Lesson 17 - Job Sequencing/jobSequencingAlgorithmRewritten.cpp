// sort jobs in decreasing order of profit
// create a results array and a slots array;
// for every job, iterate through the slots array from the end to see if there is a free slot
// if there is a free slot, add the index of the job it to the results array and make that slot true
// iterate over the results array and print jobs[results[i]].id
// (this works because results[i] is the index of the job so it is the equivalent of saying jobs[i])

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Job {
  char id;
  int deadline;
  int profit;
};

bool comparison(Job a, Job b) {
    return (a.profit > b.profit);
}

void printJobSequence(Job jobs[], int n) {
     sort(jobs, jobs+n, comparison);

     int results[n];
     bool slots[n];

     for (int i = 0; i < n; i++) {
        slots[i] = false;
     }

     for (int i = 0; i < n; i++) {
        for (int j = min(jobs[i].deadline-1, n); j >=0; j--) {
            if (!slots[j]) {
                slots[j] = true;
                results[j] = i;
                break;
            }
        }
     }

     for (int i = 0; i < n; i++) {
            if (slots[i]) {
                cout << jobs[results[i]].id << " ";
            }

     }
}

int main()
{
    Job jobs[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };

    printJobSequence(jobs, 5);
}
