#include<iostream.h>
using namespace std;
void main()
{ char op;
  float a,b;
  char n='y';
  do
  {  cout<<"Enter Two no with operator symbol\n"<<endl;
  cin>>a>>op>>b;

  switch(op)
  {case '+':cout<<a+b;
	    break;
   case '-':cout<<a-b;
	    break;
   case '*':cout<<a*b;
	    break;
   case '/':cout<<a/b;
	    break;
   default:cout<<"Enter another operator";
   }
   cout<<"Do u want another operation(y/n)\n"<<endl;
   cin>>n;
 }while(n=='y');

}