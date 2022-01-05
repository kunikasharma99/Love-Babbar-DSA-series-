#include <iostream>
using namespace std;
int main() {
//PATTERN 1 //
    /*  ***
        ***
        ***  */

/*int n;
cout << " ENTER THE VALUE OF n ( No of rows ) :\t";
cin>>n;
int i = 1; // no. of rows

while(i<=n){
 int j = 1; //no.of columns
while (j<=n){ //cols = rows
cout <<"* ";
j++;
}        
cout<<endl;
i++;
}*/


//PATTERN 2 //
    /*  1 1 1
        2 2 2
        3 3 3  */

/*int n;
cout << " ENTER THE VALUE OF n ( No of rows ) :\t";
cin>>n;
int i = 1; // no. of rows

while(i<=n){
 int j = 1; //no.of columns
while (j<=n){ //cols = rows
cout <<i<<" ";
j++;
}        
cout<<endl;
i++;
}*/

//PATTERN 3 //
    /*  1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4 */

/*int n;
cout << " ENTER THE VALUE OF n ( No of rows ) :\t";
cin>>n;
int i = 1; // no. of rows

while(i<=n){
 int j = 1; //no.of columns
while (j<=n){ //cols = rows
cout <<j<<" ";
j++;
}        
cout<<endl;
i++;
} */

//PATTERN 4 //
    /*  4 3 2 1
        4 3 2 1
        4 3 2 1 
        4 3 2 1*/

/*int n;
cout << " ENTER THE VALUE OF n ( No of rows ) :\t";
cin>>n;
int i = 1; // no. of rows

while(i<=n){
 int j = 1; //no.of columns
while (j<=n){ //cols = rows
cout <<n-j+1<<" ";
j++;
}        
cout<<endl;
i++;
} */

//PATTERN 5 //
    /*  1 2 3 
        4 5 6
        7 8 9  */
/*int n;
cout<<"Enter the value of n \t: ";
cin>>n;
int i = 1;
int count = 1;
while (i<=n) {
  int j = 1;
  while ( j<=n){
    cout<<count++<<" ";
    j++;
  }
  cout<<endl;
i++;
}*/

//PATTERN 6 //
/*      *
        * *
        * * *
        * * * *      */
/*int n;
cout<< "Enter the value of n \t: ";
cin>>n;
int i = 1;
while(i<=n){
  int j = 1;
  while(j<=i){
    cout<<"*"<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 7 //
/*      1
        2 2
        3 3 3
        4 4 4 4      */

/*int n;
cout<<"Enter the value of \t :";
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/

//PATTERN 8 //
/*      1
        2 3
        4 5 6
        7 8 9 10      */
/*int n;
cout<<"Enter the value of \t :";
cin>>n;
int i=1;
int count = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<count++<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/        

//PATTERN 8  WITHOUT USING COUNT VARIABLE //
/*      1
        2 3
        4 5 6
        7 8 9 10      */
/*int n;
cout<<"Enter the value of \t :";
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i+j-1<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/        

//PATTERN 9//
/*      1
        2 1
        3 2 1
        4 3 2 1      */

/*int n;
cout<<"Enter the value of n \t: ";
cin>>n;
int i = 1;
while(i<=n){
  int j =1 ;
  while(j<=i){
    cout<<i-j+1<<" ";
    j++;
  }
  cout<<endl;
  i++;
}*/


}
