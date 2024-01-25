#include<iostream>
using namespace std;

void add(int n1, int n2 , char op){
	int sum;
	 sum = n1+n2;
	 cout<<"Sum="<<sum;
}
void minus(int n1, int n2, char op){
	int subs;
	subs=n1-n2;
	cout<<"Substraction="<<subs;
}
void prdt(int n1, int n2, char op){
	int mul;
	mul= n1*n2;
	cout<<"Multiplication"<<mul;
}
void division(int n1, int n2, char op){
	int div;
	if(n2==0){
		cout<<"ERROR";
	}else{
		div=n1/n2;
		cout<<"Division="<<div;
	}
}

int main() {
	 int n1, n2;
   char op;
   cout<<"Enter 1st number=";
   cin>>n1;
   cout<<"Enter 2nd number=";
   cin>>n2;
 int choose;
 int sum, subs, mul, div;
  cout<<"Press 1 for Addition"<<endl;
  cout<<"Press 2 for Subtraction"<<endl;
  cout<<"Press 3 for Multipication"<<endl;
  cout<<"Press 4 for Division"<<endl;
  cout<<"Press 0 to exit"<<endl;
  
  cin>>choose;
  
   switch(choose){
   	case '1':
   		cout<<"Sum="<<sum;
   		break;   
		   	case '2':
   		cout<<"Subtract="<<subs;
   		break;   
		   
		   	case '3':
   		cout<<"Multiplication="<<mul;
   		break;  
		case '4':
   		cout<<"Division="<<div;
   		break;
   }
   
   
 }




