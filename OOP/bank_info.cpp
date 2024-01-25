#include<iostream>
using namespace std;

class bank_account{
	string name, Type;
	int accNum, amount, deposit, withdraw;
	public:
	void in(){
	cout<<"Enter name=";
	cin>>name;
	cout<<"Enter Account type=";
	cin>>Type;
	cout<<"Enter Account-Number=";
	cin>>accNum;
	cout<<"Enter Amount=";
	cin>>amount;
	}
	void add(){
		cout<<"Amount to be deposit=";
		cin>>deposit;
		amount=amount+deposit;
		cout<<"Total amount="<<amount<<endl;
	}
	void minus(){
		cout<<"Enter an amount to be withdraw=";
		cin>>withdraw;
		amount= amount-withdraw;
		cout<<"Total Amount="<<amount<<endl;
	}
	void display(){
		cout<<"======================================"<<endl;
		cout<<"INFORMATION OF THE PERSON"<<endl;
		cout<<"======================================"<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Remaining Amount="<<amount<<endl;
	}
};
int main(){
	bank_account b1;
	b1.in();
	b1.add();
	b1.minus();
	b1.display();
}



