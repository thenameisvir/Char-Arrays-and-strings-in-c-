#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string str = "ab-cd";
  int s = 0;
  int e = str.length() - 1;

  while (s <= e) {
    if ((str[s] >= 'a' && str[s] <= 'z') || (str[s] >= 'A' && str[s] <= 'Z') &&
        (str[e] >= 'a' && str[e] <= 'z') || (str[e] >= 'A' && str[e] <= 'Z')) {
      swap(str[s], str[e]);
    }
    s++;
    e--;
  }

  cout << str << endl;

  return 0;
}
