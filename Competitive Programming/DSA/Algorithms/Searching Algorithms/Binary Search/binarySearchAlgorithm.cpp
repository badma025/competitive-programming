#include <bits/stdc++.h>

using namespace std;

int locate(int l, int r, vector<int> numbers, int key) {
    if (l <= r){
        int mid = (l+r)/2;

        if (key == numbers[mid])
            return mid;

        else if (key < numbers[mid])
            return locate(l, mid-1, numbers, key);

        else if (key > numbers[mid])
            return locate(mid+1, r, numbers, key);
    }
      else
        return -1;

}

int main()
{
    vector<int> numbers = {2, 3, 5, 7, 11, 13, 15, 17, 19, 23, 29};
    int pos = locate(0, numbers.size()-1, numbers, 17);
    cout << pos;
}
