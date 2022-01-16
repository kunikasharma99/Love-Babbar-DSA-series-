#include <iostream>
#include<math.h>
using namespace std;
int main() {

  // 1.)  2'Complement of decimal Number and Conversion from Decimal Answer to Binary . 
  /*int n;
  cout<<"Enter the value of n : \t";
  cin>>n;
  int m = n;
  int mask =0;
  if(n==0){
    return 1;
  }
  while(m!=0){
    mask = (mask<<1)|1;
    m = m>>1;

  }
  
  int ans = (~n)&mask;
  ans = ans+1;
  cout<<"2's Complement  : "<<ans<<endl;

  int i =0;
int anss = 0;
while(ans!=0){
  int bit = ans&1;
  anss = (bit *pow(10,i)) + anss;
  ans = ans>>1;
  i++;
} 
cout<<"ANSWER IS : "<<anss<<endl;*/


// 2.) DECIMAL TO BINARY ( +ve Numbers )

/*int n;
cout<<"Enter the value of n: \t";
cin>>n;
int ans = 0;
int i =0;

while(n!=0){
  int bit = n&1;
  ans = (bit *pow(10,i)) + ans;
  n = n>>1;
  i++;
}

cout<<"ANSWER IS : "<<ans<<endl; */


// 3.)  BINARY TO DECIMAL 

int n;
cout<<"Enter the value of n : \t";
cin>>n;
int ans = 0;
int i = 0;
while(n!=0){
  int digit = n%10;
  if(digit==1){
    ans = ans + pow(2,i);
  }
  n= n / 10;
  i++;
}
cout<<"Answer is : "<<ans<<endl;
} 