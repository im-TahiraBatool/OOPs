#include<iostream>
using namespace std;

class sum{
	int n1, n2, add;
	public:
		void in(){
			cout<<"Enter first number:";
			cin>>n1;
			cout<<"Enter second number:";
			cin>>n2;
		}
		void calSum(){
			add=n1+n2;
			cout<<n1<<"+"<<n2<<"="<<add;
		}
};
int main(){
	sum s1;
	s1.in();
	s1.calSum();
}
