#include <iostream>

using namespace std;

int main(){
     int numbers[] = {0,2,4,6,8,10};
     int sum = 0;
     for (int i = 0; i < 6; i++) {
        sum += numbers[i];
     }
     cout << sum;
}
