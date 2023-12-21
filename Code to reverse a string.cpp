#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
  string name;
  cin>>name;
  int n = name.length();
  int l = 0;
  int r = n-1;
  while(l<=r){
    swap(name[l],name[r]);
    l++;
    r--;
  }
  cout<<name;
  return 0;
}