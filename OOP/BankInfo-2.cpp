#include<iostream>
using namespace std;

class bank_account{
	string name, Type;
	int accNum, amount, deposit, withdraw, select;
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
	void select(){
		cout<<"What'd you want to:"<<endl;
		cout<<"For Withdraw press 0 and for Deposit press 1"<<endl;
		cin>>select;
		if(select==1){
				cout<<"Amount to be deposit=";
		cin>>deposit;
		amount=amount+deposit;
		cout<<"Total amount="<<amount<<endl;
	    }
		else if(select=0){
				cout<<"Enter an amount to be withdraw=";
		cin>>withdraw;
		amount= amount-withdraw;
		cout<<"Total Amount="<<amount<<endl;
		}
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
	b1.select();
	b1.display();
}



