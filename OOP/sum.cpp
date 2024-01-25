#include<iostream>
using namespace std;

class addition{
	int n1,n2,sum;
		
	public:
	void in(){
		cout<<"Enter first number:";
		cin>>n1;
		cout<<"Enter second number:";
		cin>>n2;
	}
	void getsum(){
		sum=n1+n2;
		cout<<"Sum="<<sum;
	}
};
main(){
	addition c1;
	c1.in();
	c1.getsum();
	
}
