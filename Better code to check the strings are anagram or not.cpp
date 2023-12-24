#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string s = "anagram";
  string t = "anagram";
  bool flag = true;
  int arr[256] = {0};
  for(int i=0;i<s.size();i++){
    arr[s[i]]++;
  }
  for(int i=0;i<t.size();i++){
    arr[t[i]]--;
  }
  for(int i=0;i<256;i++){
    if(arr[i]!=0){
      flag = false;
      break;
    }
  }
  if(flag){
    cout<<"It is an anagram";
  }
  else{
    cout<<"It is not an anagram";
  }

}