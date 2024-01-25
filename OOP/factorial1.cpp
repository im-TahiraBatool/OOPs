#include<iostream>
using namespace std;

class math{
	int n1, fact=1;
	public:
		void in(){
			cout<<"Enter an integer:";
			cin>>n1;
		}
		void out(){
			if(n1<0){
				cout<<"Enter a positive number!!!";
			}
			else{
			for (int a=1;a<=n1;a++)
			fact=fact*a;		
			}
		}
		void getfact(){
		
			cout<<"Factorial="<<fact;
		}
};
main(){
	math c1;
	c1.in();
	c1.out();
	c1.getfact();
}
