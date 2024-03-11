#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr, int n) {
  int max_so_far = arr[0], max_ending_here = arr[0];

  for (int i = 1; i < n; i++) {
    max_ending_here = max(arr[i], max_ending_here + arr[i]);
    max_so_far = max(max_so_far, max_ending_here);
  }

  return max_so_far;
}

int main() {
  // int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  // int n = sizeof(arr) / sizeof(arr[0]);

  int n;
  cout << "Enter size of array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter array elements: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int max_sum = maxSubarraySum(arr, n);

  cout << "Maximum contiguous sum is " << max_sum;

  return 0;
}