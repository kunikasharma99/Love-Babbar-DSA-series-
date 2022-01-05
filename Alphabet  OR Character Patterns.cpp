#include <iostream>
using namespace std;

int main() {
//PATTERN 1//
      /* A A A A
         B B B B
         C C C C
         D D D D  */  
  int n;
  cout<<"Enter the value of n \t :";
  cin>>n;
  int i = 1;  //Rows
  
  while(i<=n){
    int j = 1;
    while(j<=n){
      char ch = 'A'+i-1;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
} 