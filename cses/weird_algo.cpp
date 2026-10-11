#include <bits/stdc++.h>

void algo(long long n) {
  std::cout << n << " ";
  while (n != 1) {
    if (n == 1) {
      break;
    }
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = (n * 3) + 1;
    };
    std::cout << n << " ";
  };
}

int main() {
  long long number;
  std::cin >> number;
  algo(number);
  // std::cout << result;
}
