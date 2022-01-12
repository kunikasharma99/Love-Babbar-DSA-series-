#include <iostream>
using namespace std;

int main() {
  int a  = 4;
  int b = 6;
  int c = a & b;
  int d = a|b;
  int e = ~a;
  int f = ~b;
  int g = a^b;
  int a1 = 17;
  int a2 = 19;
  int a3 = 21;
  int h = a1>>1;
  int i = a1>>2;
  int j= a2<<1;
  int k = a3<<2;
  cout<<"BITWISE AND : \t"<<c<<"\n";
  cout<<"BITWISE OR : \t"<<d<<"\n";
  cout<<"BITWISE NOT OF a : \t"<<e<<"\n";
  cout<<"BITWISE NOT OF b : \t"<<f<<"\n";
  cout<<"BITWISE XOR : \t"<<g<<"\n";
  cout <<"RIGHT SHIFT 17>>1 :\t"<<h<<"\n";
  cout <<"RIGHT SHIFT 17>>2:\t"<<i<<"\n";
  cout <<"LEFT SHIFT 19<<1 :\t"<<j<<"\n";
  cout <<"LEFT SHIFT 21<<2:\t"<<k<<"\n";
  cout<<"POST INCREMENT"<<a++<<"\n";
  //4   ; i = 5
  cout<<"PRE INCREMENT"<<++a<<"\n";
  //6   ; i = 6
  cout<<"POST DECREMENT"<<a--<<"\n";
  //6   ; i = 5
  cout<<"PRE DECREMENT"<<--a<<"\n";
  //4   ; i = 4

cout<<"\n";
cout<<"OUTPUT QUESTION 1"; 
cout<<"\n";
int  x = 1;
int y = 2;
if(x-->0 && ++y>2){
  cout<<"Stage 1 - Inside-if";
}else{
  cout<<"Stage 2 - Inside-else";
}
cout<<"\n";
cout<<x<<" "<<y<<endl;

cout<<"\n";
cout<<"OUTPUT QUESTION 2"; 
cout<<"\n";
int  x1 = 1;
int y1 = 2;
if(x1-->0 || ++y1>2){
  cout<<"Stage 1 - Inside-if";
}else{
  cout<<"Stage 2 - Inside-else";
}
cout<<"\n";
cout<<x1<<" "<<y1<<endl;

cout<<"\n";
cout<<"OUTPUT QUESTION 3"; 
cout<<"\n";
int x2,y2=1;
x2 = 10;
if (++x2)
cout<<y2;
else
cout<<++y2;
cout<<"\n";

cout<<"\n";
cout<<"OUTPUT QUESTION 4"; 
cout<<"\n";
int number = 3;
cout<< (25*(++number));
cout<<"\n";

cout<<"\n";
cout<<"OUTPUT QUESTION 5"; 
cout<<"\n";
int x3 = 1;
int y3 = x3++;
int z3 = ++x3;
cout<<y3;
cout<<"\n";
cout<<z3;
cout<<"\n";
} 