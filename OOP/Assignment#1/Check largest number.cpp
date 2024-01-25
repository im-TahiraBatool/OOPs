#include<iostream>
using namespace std;

class largest{
	public:
	int n1, n2, n3;
	void numbers(){
		cout<<"Enter numbers:"<<endl;
		cin>>n1>>n2>>n3;
	}
	void check(){
		if(n1>n2 && n1>n3){
			cout<<n1<<" is the largest number."<<endl;
		}
		else if(n2>n3 && n2>n1){
			cout<<n2<<" is the largest number."<<endl;
		}
		else{
			cout<<n3<<" is the largest number."<<endl;
		}
	}
};
main(){
	largest num;
	num.numbers();
	num.check();
}
