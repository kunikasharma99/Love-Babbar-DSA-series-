#include <iostream>
using namespace std;

int main() {

//PATTERN 1 //
/*      *
       * *
     * * *
   * * * *    */
 /*int n;
 cout<<"Enter the value of n : \t";
 cin>>n;
 int i =1;
 while(i<=n){
   //Print Space
   int space = n-i;
   while(space){
     cout<<" ";
     space--;
     }
     //Print Stars
     int j =1;
   while(j<=i){
     cout<< "* ";
     j++;
   }
   cout<<endl;
   i++;

 }*/

//PATTERN 2 //
/*    * * * *
      * * *
      * *
      *       */

/*int n;
cout<<"Enter the value of n : \t";
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=n-i+1){
    cout<<"* ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 3 //
/*    * * * *
        * * *
          * *
            *       */

/*int n;
cout<<"Enter the value of n: \t";
cin>>n;
int i = 1;
while ( i<=n){
  int space = i-1;
  while(space){
    cout<<" ";
    space--;
  }
  int j =1;
  while(j<=n-i+1){
    cout<<"*";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 4 //
/*    1 1 1 1
        2 2 2
          3 3
            4 */

/*int n ;
cout<<"Enter the value of n: \t";
cin>>n;
int i = 1;
while(i<=n){
  int space = i-1;
  while(space){
    cout<<" ";
    space--;
  } 
  int j = 1;
  while(j<=n-i+1){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 5 //
/*          1
          2 2
        3 3 3
      4 4 4 4 */

/*int n ;
cout<<"Enter the value of n: \t";
cin>>n;
int i = 1;
while(i<=n){
  int space = n-i;
  while(space){
    cout<<" ";
    space--;
  } 
  int j = 1;
  while(j<=i){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 6 //
/*    1 2 3 4
        2 3 4
          3 4
            4 */

int n ;
cout<<"Enter the value of n: \t";
cin>>n;
int i = 1;
while(i<=n){
  int space = i-1;
  while(space){
    cout<<" ";
    space--;
  } 
  int j = 1;
  while(j<=n-i+1){
    cout<<i+j-1;
    j++;
  }
  cout<<endl;
  i++;
}
} 