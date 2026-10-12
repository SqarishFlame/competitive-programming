#include <bits/stdc++.h>
using namespace std;

void increase_array(long long size, long long array[]) {
  long long count = 0;
  for (long long i = 1; i < size; i++) {
    if (array[i] < array[i - 1]) {
      count += array[i - 1] - array[i];
      array[i] = array[i - 1];
    };
  };
  cout << count;
}

int main() {
  long long n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  };
  increase_array(n, arr);
  return 0;
}
