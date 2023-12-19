#include<iostream>
#include<cstring>
using namespace std;
void converttoupper(char ch[],int len){
  int i = 0;
  while(ch[i]!='\0'){
    char currindex = ch[i];
    if(currindex>='a'&&currindex<='z'){
      ch[i] = currindex - 'a'+'A';
    }
    i++;
  }
}
int main(){
  char ch[100];
  cin.getline(ch,100);
  int len = strlen(ch);
  converttoupper(ch,len);
  cout<<ch;
}