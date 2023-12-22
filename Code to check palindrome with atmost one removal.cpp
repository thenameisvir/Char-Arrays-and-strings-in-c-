#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool checkpalindrome(string pal, int s, int e) {
  while (s <= e) {
    if (pal[s] == pal[e]) {
      s++;
      e--;
    } else {
      return false;
    }
  }
  return true;
}

int main() {
  string pal;
  cin >> pal;
  int s = 0;
  int e = pal.length() - 1;

  while (s < e) {
    if (pal[s] == pal[e]) {
      s++;
      e--;
    } else {
      bool ans1 = checkpalindrome(pal, s + 1, e);
      bool ans2 = checkpalindrome(pal, s, e - 1);

      if (ans1 || ans2) {
        cout << "True" << endl;
      } else {
        cout << "False" << endl;
      }

      // Exit the program
      return 0;
    }
  }

  // If the loop completes, the string is already a palindrome
  cout << "The given string is already a palindrome." << endl;

  return 0;
}
