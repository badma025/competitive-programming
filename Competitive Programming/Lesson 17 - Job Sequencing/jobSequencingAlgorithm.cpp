#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

struct Job {
   char id;
   int deadline;
   int profit;
};

// sorting jobs by profit in descending order
// if a.profit > b.profit, the function returns true, and a is placed before b
bool comparison(Job a, Job b) {
   return (a.profit > b.profit);
}

void printJobScheduling(vector<Job> jobs) {
   sort(jobs.begin(), jobs.end(), comparison);

   vector<bool> slots(jobs.size(), false);
   vector<int> results;

   int n = slots.size();

   for (int i = 0; i < jobs.size(); i++){
        for (int j = min(n, jobs[i].deadline-1); j >= 0; j--){
            if (!slots[j]){
                results.push_back(i); // the results index (j) is the index of the job
                slots[j] = true;
                break;
            }
        }
   }


   for (int i = 0; i < results.size(); i++) {
          cout << jobs[results[i]].id << " ";
   }
}

int main(){
  vector <Job> jobs = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };
   printJobScheduling(jobs);

}
