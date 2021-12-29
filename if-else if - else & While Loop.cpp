#include<iostream>
using namespace std;

int main(){

           //QUESTION 1//
/*int a =9;
if (a==9){
  cout <<"NINEY"<<endl;
}
if ( a>0) {
  cout<< "a is POSITIVE"<< endl;
}
else {
  cout<<"a is NEGATIVE"<<endl;
}*/

               //QUESTION 2//
/*int a = 2;
int b = a+1;

if ((a=3)==b){
  cout<<a;
}
else{
  cout<<a+1;
}*/
                //QUESTION 3//
/*int a = 24;
if (a>20){
  cout<<"Love"<<endl;
}               
else if (a==24){
  cout<<"Lovely";
} 
else {
  cout<<"Babbar";
  }
  cout<<a;*/

                  //QUESTION 4//
/*char ch;
cout<<"Enter the values of character"<<endl;
cin>>ch;

if ( ch>='a'&& ch<='z'){
  cout<<"It is lowercase";
} 
else if (ch>='A'&& ch<='Z'){
  cout<<"It is uppercase";                 
}
else if (ch>='0'&& ch<='9'){
  cout<<"This is numeric";
}*/

        //Print numbers from 1 to n WHILE LOOP
/*int n;
cout <<"Enter the value of n : \t";
cin>>n;
int num = 1;
while (num <= n){
  cout<< " "<<num  ;
  num+=1;
}*/

//Print sum of numbers from 1 to n WHILE LOOP
/*int n;
cout <<"Enter the value of n : \t";
cin>>n;
int sum =0;
int num = 1;
while (num <= n){
  sum = sum+num;
  
  num+=1;
}
cout<< "SUM IS :\t"<<sum  ;*/

//Print sum of all even numbers from 1 to n WHILE LOOP
/*int n;
cout <<"Enter the value of n : \t";
cin>>n;
int sum =0;
int num = 2;
while (num <= n){
  sum = sum+num;
  
  num+=2;
}
cout<< "SUM of all even numbers is :\t"<<sum  ;
*/

        //Fahrenheit to Celcius Conversion //
/*float F , C;
cout <<"Enter the degree Fahrenheit: \t";
cin >> F;
C = (F-32)*0.556;
cout<< "Degree Celcius is : "<<C; */

      //Prime Number or not //
/*int n;
cout <<"Enter the value of n : \t";
cin>>n;
int num = 2;

while (num < n){
if (n % num==0){
  cout<<"Not prime";
  break;
}
else{
  cout<<"Given Number is Prime Number"<<endl;
  break;
  
}
num+=1;
}*/      
        //or//
        
int n;
    cin >> n;

    int i = 2;

    while(i<n) {
        //divide hogya, not prime
        if(n%i==0) {
            cout<< " Not prime for "<< i << endl;
        }
        else{
            cout<<" Prime for "<< i <<endl;
        }
        i = i + 1;
    }


}