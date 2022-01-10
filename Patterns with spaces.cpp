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
    cout<<i+j-1;
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 7//
/*         1
         2 3
       4 5 6
     7 8 9 10    */

/*int n;
cout<<"Enter the value of n :\t";
cin>>n;
int i = 1;
int count =1;
while(i<=n){
  int space = n-i;
  while(space){
    cout<<" ";
    space--;
  }
  int j=1;
  
  while(j<=i){
    
    cout<<count++<<"";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 8 //
/*       1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1    */

 /*int n;
 cout<<"Enter the value of n :\t";
 cin>>n;
 int i = 1;
 while(i<=n){
   //print space
   int space = n-i;
   while(space){
     cout<<" ";
     space--;
   }
   //print 2nd component [ 1st Triangle]
   int j=1;
   while(j<=i){
     cout<<j;
     j++;
   }
   //print 3rd component [ 2nd Triangle]
   int start = i-1;
   while(start){
     cout<<start;
     start--;
   }
   cout<<endl;
   i++;
 } */

//PATTTERN 9 [DABANGG PATTERN]//
/*    1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1   */

/*int n ;
cout<<"Enter the value of n :\t";
cin>>n;
int i=1;
while(i<=n){
  int j =1;
  //1st Triangle 
  while(j<=n-i+1){
    cout<<j;
    j++;
  }
  //Print STARS
while(j<=n+i-1){
cout<<"*";
j++;
}
//2nd TRIANGLE
int start = n-i+1;
while(start){
  cout<<start;
  start--;
  j++;
}
  cout<<endl;
  i++;
}*/
} 
