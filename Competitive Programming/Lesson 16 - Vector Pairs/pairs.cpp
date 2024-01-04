// vector pairs can take more than one data type
#include <iostream>

using namespace std;

int main()
{
    pair<int,int> chessPair(2000, 2500);
    cout << chessPair.first << endl << chessPair.second;
}
