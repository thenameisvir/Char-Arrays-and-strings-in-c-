#include<iostream>
#include<string>
using namespace std;

int main()
{
  string strs[100] = {"flower", "flow", "floght"};
  string s;

  for (int i = 0; i < strs[0].length(); i++) {
    if (strs[0][i] == strs[1][i] && strs[1][i] == strs[2][i]) {
      s.push_back(strs[0][i]);
    }
  }
 
  cout << s << endl;
  return 0;
}
