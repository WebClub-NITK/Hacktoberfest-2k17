#include <iostream>

using namespace std;

bool isPalindrome(int number);

int main() {
  int highestPalindrome = 0;
  int tempNum = 0;

  for (int a = 100; a <= 999; a++) {
    for (int b = 100; b <= 999; b++) {
      tempNum = a * b;
      if (isPalindrome(tempNum) && tempNum > highestPalindrome) {
        highestPalindrome = tempNum;
      }
    }
  }

  cout << "Highest Palindrome is " << highestPalindrome;
  return 0;
}

bool isPalindrome(int number) {
  string strnumber = to_string(number);

  for (size_t i = 0; i < strnumber.length(); i++) {
    if (strnumber[i] != strnumber[(strnumber.length() - 1) - i]) return false;
  }

  return true;
}
