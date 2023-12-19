#include<iostream>
using namespace std;
int findlength(char ch[] ,int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    if(ch[i]=='\0'){
      break;
    }
    else
    {
      sum++;
    }
  }
  return sum;
}
int main()
{
  char ch[100];
  cin.getline(ch,100);
  int len = findlength(ch,100);
  cout<<"Length of the char string is: "<<len<<endl;
}