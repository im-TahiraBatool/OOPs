#include<iostream>
using namespace std;

class factorial{
	private:
		int n;
		long fact=1;
		public:
			void calFactorial(){
				cout<<"Enter a number=";
				cin>>n;
				if(n==0 ||n==1){
					fact=1;
				}
				else{
					for(int i=1; i<=n; i++){
					fact= fact*i;
				}
				}
			}
			void out(){
				cout<<"Factorial= "<<fact;
			}
};
main(){
	factorial f1;
	f1.calFactorial();
	f1.out();
}
