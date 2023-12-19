#include<iostream>
#include<string.h>
using namespace std;
void replace(char ch[],int len){
  for(int i=0;i<len;i++){
    if(ch[i] == '@'){
      ch[i] =  ' ';
    }
    else{
      continue;
    }
  }

}
int main(){
  char ch[100];
  cin.getline(ch,100);
  int len = strlen(ch);
  replace(ch,len);
  cout<<ch;
}