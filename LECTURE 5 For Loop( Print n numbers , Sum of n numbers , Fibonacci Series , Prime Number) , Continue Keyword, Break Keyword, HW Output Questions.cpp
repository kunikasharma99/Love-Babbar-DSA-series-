#include <iostream>
using namespace std;

int main() {
// PRINT NUMBERS FROM 1 TO n
 /* int n;
  cout<<"Enter the value of n : \t";
  cin>>n;
  int i = 1;
  for(;;){
    if(i<=n){
cout<<i<<endl;
    }
    else{
      break;
    }
i++;
  }*/

// 1.)  PRINT SUM OF NUMBERS FROM 1 TO n
/*int n;
cout<<"Enter the value of n:\t";
cin>>n;
int sum = 0;
for (int i = 1;i<=n;i++){
  sum+=i;
} 
cout<<"SUM IS :\t"<<sum<<endl; */

// 2.) FIBONACCI SERIES 
/*int n ;
cout<<"Enter the value of n:\t";
cin>>n;
int a = 0;
int b = 1;
cout<<a<<"\t"<<b<<"\t";

for (int i = 1; i<=n;i++){
  int next = a+b;
  cout<<next<<"\t";
  a = b;
  b = next;
  }*/

// 3.) PRIME NUMBER 
/*int n;
cout<<"Enter the value of n:\t";
cin>>n;
bool isPrime = 1;
for(int i =2;i<n;i++){
  if(n%i==0){
    isPrime = 0;
    break;
  }
}
if(isPrime==0)
cout<<"Not a Prime Number";
else
cout<<"Prime Number";
*/

//Continue Keyword : Skips next Iteration
/*for(int i = 0; i<5;i++){
  cout<<"hi"<<endl;
  cout<<"Hey"<<endl;
  continue;
  cout<<"Reply Krde"<<endl;
}*/

/*cout<<"\n";
cout<<"1st QUESTION ";
cout<<"\n";
for(int i =0;i<=5;i++){
  cout<<i<<" ";
  i++;
}*/

/*cout<<"\n";
cout<<"2nd QUESTION ";
cout<<"\n";
for(int i =0;i<=5;i--){
  cout<<i<<" ";
  i++;
} */

/*cout<<"\n";
cout<<" 3rd QUESTION ";
cout<<"\n";
for(int i =0;i<=15;i+=2){
  cout<<i<<" ";

  if(i&1){
    continue;
  }
  i++;
}*/

/*cout<<"\n";
cout<<" 4th QUESTION ";
cout<<"\n";
for(int i =0;i<5;i++){
  for(int j = i;j<=5;j++){
    cout<<i<<" "<<j<<endl;
  }
}*/

/*cout<<"\n";
cout<<" 5th QUESTION ";
cout<<"\n";
for(int i = 0;i<5;i++){
  for(int j = i; j<=5;j++){
    if(i+j==10){
      break;
    }
    cout<<i<<" "<<j<<endl;
  }
}*/
}