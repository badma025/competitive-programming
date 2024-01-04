// unordered sets do not sort the data in order
// unordered sets are faster

#include <unordered_set>
#include <iostream>

using namespace std;

int main(){
   unordered_set<int> uset = {4, 1, 2, 3, 4, 6, 4, 7};

   for (auto& elm: uset) {
    cout << elm << " ";
   }
}
