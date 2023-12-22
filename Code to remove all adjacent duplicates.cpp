#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string name;
  cin>>name;
  string emp = "";
  int i = 0;
  while(i<name.length()){
    if(emp.length() > 0 && emp[emp.length()-1] == name[i]){
      emp.pop_back();
    }
    else{
      emp.push_back(name[i]);
    }
    i++;
  }
  cout<<emp;}