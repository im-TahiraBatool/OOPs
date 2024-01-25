#include<iostream>
using namespace std;

class num{
	int n;
	public:
		void enterNum(){
			cout<<"Enter an integer:";
			cin>>n;
		}
		void check(){
			if(n %2==0){
				cout<<n<<" is even.";
			}
			else{
				cout<<n<<" is odd.";
			}
		}
};
main(){
	num N;
	N.enterNum();
	N.check();
}
