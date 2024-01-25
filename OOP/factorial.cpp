#include<iostream>
using namespace std;
class calculator{
float n1,n2;
int sum, sub, mul, div;
public:
void in(){
cout<<"Enter first integer:";
cin>>n1;
cout<<"Enter second integer:";
cin>>n2;
}
void operations(){
char op;
cout<<"Enter an operator:";
cin>>op;
switch (op){
case '+':
sum=n1+n2;
cout<<n1<<"+"<<n2<<"="<<sum;
break;
case '-':
sub=n1-n2;
cout<<"Subtraction="<<sub;
break;
case'*':
mul=n1*n2;
cout<<"Multiplication="<<mul;
break;
case '/':
div=n1/n2;
cout<<"Division="<<div;
break;
default:
cout<<"INVALID INPUT";
 } 
}
 };
main(){
calculator c1;
c1.in();
c1.operations();
}
