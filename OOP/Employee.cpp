#include<iostream>
using namespace std;

class Employee{
	int empID, salary;
	void in(){
	cout<<"Enter empID:";
	cin>>empID;
	cout<<"Enter salary:";
	cin>>salary;
}};
 
 class manager:public Employee{
 	int department;
 	void Management(){
 	
	 }
 	
 };
 class Engineer:public Employee{
 	string site;
 	void VisitSite(){
 		
	 }
 };
 int main(){
Employee s1;
s1.in();
 }
