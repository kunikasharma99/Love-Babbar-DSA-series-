#include <iostream>
using namespace std;

int main() {
//PATTERN 1//
      /* A A A A
         B B B B
         C C C C
         D D D D  */  
  /*int n;
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
  }*/

//PATTERN 2//
  /*  A B C
      A B C  
      A B C   */

/*int n;
cout<<"Enter the Value of n \t : ";
cin>>n;
int i =1;
while(i<=n){
  int j =1;
  while(j<=n){
    char ch = 'A'+j-1;
    cout<<ch<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 3//
/*   A B C
     D E F
     G H I  */

/*int n;
cout<<"Enter the value of n : \t ";
cin>>n;
int i =1;
int count =1;
while(i<=n){
  int j=1;
  while(j<=n){
    char ch = 'A'+count-1;
    cout<<ch<<" ";
    j++;
    count ++;
  }
  cout<<endl;
  i++;
}*/

      //OR//

/*int n;
cout<<"Enter the value of n : \t ";
cin>>n;
int i =1;
char start = 'A';
while(i<=n){
  int j=1;
  while(j<=n){
    cout<<start ++<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 4//
/*   A B C
     B C D
     C D E  */

/*int n;
cout<<"Enter the value of n : \t ";
cin>>n;
int i = 1;
while (i<=n){
  int j = 1;
  while(j<=n){
    char ch = 'A'+i+j-2;
    cout<<ch<<" ";
    j++;
  }
  cout<<endl;
  i++;
} */    

//PATTERN 5//
      /* A 
         B B
         C C C 
         D D D D  */  
  /*int n;
  cout<<"Enter the value of n \t :";
  cin>>n;
  int i = 1;  //Rows
  
  while(i<=n){
    int j = 1;
    while(j<=i){
      char ch = 'A'+i-1;
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }*/

//PATTERN 6//
/*  A
    B C
    D E F
    G H I J   */

/*int n;
cout<<"Enter the value of n : \t";
cin>>n;
int i =1;
char start = 'A';
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<start ++<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 7//
/*    A
      B C
      C D E
      D E F G   */

/*int n;
cout<<"Enter the value of n : \t";
cin>>n;
int i = 1;
while(i<=n){
  int j =1;
  while(j<=i){
    char ch = 'A'+i+j-2;
    cout<<ch<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 8//
/*   D
     C D
     B C D
     A B C D   */

int n;
cout<<"Enter the value of n: \t";
cin>>n;
int i= 1;
while(i<=n){
  int j =1;
  while(j<=i){
    char ch = 'D'+n-i+j-4;
    cout<<ch<<" ";
    j++;
  }
  cout<<endl;
  i++;
}     



}      
