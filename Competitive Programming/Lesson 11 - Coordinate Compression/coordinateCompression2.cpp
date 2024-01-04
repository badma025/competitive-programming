#include <iostream>
#include <vector>

using namespace std;

vector <int> convert (vector<int> numberArray) {
         vector <int> results (numberArray.size());
         int position = 0;

         for (int i = 0; i < numberArray.size(); i++) {
            int minn = INT_MAX;
            int index = -1;


            for (int j = 0; j < numberArray.size(); j++) {
                if (numberArray[j] < minn) {
                    minn = numberArray[j];
                    index = j;
                }
            }

            results[index] = position;
            numberArray[index] = INT_MAX;
            position++;
         }

         return results;
}



int main()
{
    vector <int> numberArray = {10, 5, 20, -1};

    vector <int> compressed = convert(numberArray);

    for (int i = 0; i < compressed.size(); i++) {
        cout << compressed[i] << " ";
    }
}
