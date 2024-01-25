#include<iostream>
using namespace std;
 
 class leap{
 int year;
 public:
 void in(){
 	cout<<"Enter year:";
 	cin>>year;
 }	
 void check(){
 	if(year % 4==0){
 		cout<<"It's a leap year";
	 }
	 else{
	 	cout<<"It's not a leap year";
	 }
 }
 };
 main(){
 	leap y;
 	y.in();
 	y.check();
 }
