#include <iostream>
using namespace std;
int main() {
    //PATEERN 1 //
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


//PATEERN 2 //
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

//PATEERN 3 //
    /*  1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4 */

int n;
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
} 
}