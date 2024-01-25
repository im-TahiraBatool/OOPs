//Find squareRoot of a number using exception handling (with try, throw and catch).
#include<iostream>
#include<cmath>
using namespace std;

int main(){
try{
    double n;
	cout<<"Enter an integer:";
	cin>>n;
	if(n<=0){
	    throw "Invalid input!";
	}
	double result=sqrt(n);
	cout<<"SquareRoot="<<result<<endl;
}
//	catch(...){
catch(const char*errorMessage){
		cout<<"ERROR:"<<errorMessage;
	};
	return 0;
}
