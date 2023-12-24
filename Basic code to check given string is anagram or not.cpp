#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
  string s = "anagram";
  string t = "nagarm";
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  bool  f = true;
  if(s.length()!=t.length()){
    cout<<"It is not a anagram"<<endl;
    f = false;
  }
  else{
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==t[i]){
        continue;
      }
      else{
        f = false;
      }
    }
  }
  if(f){
    cout<<"It is a anagram";
  }
  else{
    "It is not a anagram";
  }

}