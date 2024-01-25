#include<iostream>
using namespace std;

class series{
	public:
		void fi(int length){
		if(length <= 0){
			cout<<"INVALID";
			return;
		}
		int a=0, b=1, next;
		cout<<"Fibonacci series:"<<endl;
		if(length >=1){
			cout<<a;
		}
		for(int i=2; i<=length ; i++){
			cout<<endl<<b;
			next=a+b;
			a=b;
			b=next;
		}
		cout<<endl;
		}
};
int main(){
	series f1;
	int length;
	cout<<"Enter length:";
	cin>>length;
	f1.fi(length);
}
