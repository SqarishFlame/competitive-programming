#include <iostream>
#include <string>

int find_rep(std::string str) {
  int count = 1;
  int temp = 1;
  for (int i = 1; i < str.length(); i++) {
    if (str[i] == str[i - 1]) {
      temp++;
      if (temp > count) {
        count = temp;
      };
    } else {
      temp = 1;
    };
  };
  return count;
};

int main() {
  std::string dna;
  std::cin >> dna;
  int count = find_rep(dna);
  std::cout << count;
  return 0;
};
