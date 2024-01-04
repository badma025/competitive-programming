#include <iostream>
#include <set>

using namespace std;

int main()
{
   set<int> colours;

   int s1, s2, s3, s4;

   cin >> s1 >> s2 >> s3 >> s4;

   colours.insert(s1);
   colours.insert(s2);
   colours.insert(s3);
   colours.insert(s4);

   cout << 4 - colours.size();
}
