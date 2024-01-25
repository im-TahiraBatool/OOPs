//Create a base class Animal with a method makeSound(). Derive two classes Dog and Cat from Animal
// and override the makeSound() method to represent the sound each animal makes.
#include<iostream>
using namespace std;

class Animal{
	public:
	virtual	void makeSound(){
			cout<<"General Animals sounds:"<<endl;
		}
};
class cat:public Animal{
	public:
		void makeSound()override{
		cout<<"Meow! Meow!"<<endl;
	}
};
class dog:public Animal{
	public:
		void makeSound()override{
			cout<<"Woof! Woof!"<<endl;
		}
};
int main(){
	Animal*cptr= new cat();
	Animal*dptr=new dog();
	cout<<"Animal 1:"<<endl;
	cptr->makeSound();
	cout<<"Animal 2"<<endl;
	dptr->makeSound();
	return 0;
}
