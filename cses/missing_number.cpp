#include <iostream>
using namespace std;

int main() {
  long long n, nums;
  cin >> n;
  long long exp_sum = n * (n + 1) / 2;

  for (long long i = 0; i < n - 1; i++) {
    cin >> nums;
    exp_sum -= nums;
  };
  cout << exp_sum << endl;
}
