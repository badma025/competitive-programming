#include <bits/stdc++.h>

using namespace std;

int main()
{
    int length;
    cin >> length;

    char character;
    char phrase[length];

   for (int i = 0; i < length; i++) {
    cin >> character;
    phrase[i] = character;
   }

   char smallestChar = phrase[0];
   int smallestCharIndex = 0;

   for (int i = 0; i < length; i++) {
         if (phrase[i] <= smallestChar) {
            smallestChar = phrase[i];
            smallestCharIndex = i;
         }
   }

   for (int i = 0; i < length; i++) {
       if (phrase[i] > smallestChar){
          for (int j = length - 1; j >= i; j--) {
            phrase[j] = phrase[j - 1];  // Shift elements to the right
            }

            phrase[i] = smallestChar;
       }
   break;
   }

   for (int i = 0; i < length; i++) {
           cout << phrase[i];
    }
}
