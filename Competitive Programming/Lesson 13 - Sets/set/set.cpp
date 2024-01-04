// sets do not allow duplicates


#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main()
{
    set <int> mySet = {5, 4, 3, 2, 1, 5, 4, 3, 2, 1};

    for (const auto& e: mySet) {
        cout << e << " ";
    }
}
