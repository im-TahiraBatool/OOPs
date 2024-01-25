#include<iostream>
using namespace std;

class operations{
	public:
	int sum, prdct,avg, subtr,x,y;
	float  div;
	void in(){
		cout<<"Enter the values for operations:";
		cin>>x>>y;
	}
	void out(){
		sum=x+y;
		prdct=x*y;
		subtr=x-y;
		avg=sum/2;
		if(x>y){
			div=x/y;
			cout<<"Division"<<"="<<div<<endl;
		}
		else{
			cout<<"Division not possible."<<endl;
		}
		cout<<"Sum"<<"="<<sum<<endl;
		cout<<"Product"<<"="<<prdct<<endl;
		cout<<"Subtraction"<<"="<<subtr<<endl;
		cout<<"Average"<<"="<<avg<<endl;
	}	
};
main(){
operations c1;
c1.in();
c1.out();
}
