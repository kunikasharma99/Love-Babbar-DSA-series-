#include <iostream>
#include <cstdlib>
using namespace std;
int input();
int main() {

  int a,b,c,d,e,f;
  cout <<"Menu Driven Calculator "<<endl;
  cout <<"Enter the value of first operand : " <<endl;
  cin>>a;
  cout<<"Enter the value of second operand : "<<endl;
  cin>>b;
  int choice;

  while (1)
    {
cout<<"Enter 1 for addition\n Enter 2 for subtraction \n Enter 3 for multiplication \n Enter 4 for division \n";

  choice = input();
      switch (choice){

        case 1:{
          c = a +b;
          cout<<"Addition result : "<<c<<endl;
        }

        break;

        case 2:{
        d = a-b;
        cout<<"Subtraction result : "<<d<<endl;
        }
        break;

        case 3: {
        e = a*b;
        cout<<"Multiplication Result : "<<e<<endl;
        }
        break;

        case 4: {
            if ( b==0)
            {
                cout<<"Invalid division"<<endl;
            }
            else{
               f = a/b;
        cout<<"Division result : "<<f<<endl;
       }
        }
        break;

        case 5: exit(0);
        }


}
int input()
{
    int x;
    cin>>x;
    return (x);
    }
