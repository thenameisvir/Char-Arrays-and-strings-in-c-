#include<iostream>
#include<string.h>
using namespace std;

bool checkpalindrome(char ch[], int len) {
  int i = 0;
  int j = len-1;
  while(i<=j){
    if(ch[i]==ch[j]){
      i++;
      j--;
    }
    else{
      return false;
    }
  }
  return true;
}

int main() {
  char ch[100];
  // cout << "Enter a string: ";
  cin.getline(ch, 100);
  
  int len = strlen(ch);
  bool check = checkpalindrome(ch, len);

  if (check) {
    cout << "It is a palindrome";
  } else {
    cout << "It is not a palindrome";
  }

  return 0;
}
