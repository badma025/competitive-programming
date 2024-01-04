#include <iostream>

using namespace std;

int calculateMaxSum(int arr[], int k, int n)
{
    int max_sum = 0;
    int window_sum = 0;

    // calculate our initial maximum sum
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (int i = k; i < n; i++){
        window_sum += arr[i];
        window_sum -= arr[i-k];

        max_sum = max(window_sum, max_sum);
    }

    return max_sum;
}


int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = calculateMaxSum(arr,k,n);

    cout << maxSum;
}
