// Define a base class Animal with a virtual function makeSound(). Derive classes Dog, Cat,
// and Cow from Animal and implement makeSound() to display the sound each animal makes.
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void makeSound(){
			cout<<"Animal's Voice...";
		}
};
class Dog:public Animal{
	public:
		void makeSound(){
			cout<<"Woof! Woof!"<<endl;
		}
};
class Cat:public Animal{
	public:
		void makeSound(){
			cout<<"Meow! Meow!"<<endl;
		}
};
class Cow:public Animal{
	public:
		void makeSound(){
			cout<<"Gaa! Gaa!"<<endl;
		}
};
int main(){
	Animal *dptr= new Dog();
	Animal *cptr= new Cat();
	Animal *aptr= new Cow();
	dptr->makeSound();
	cptr->makeSound();
	aptr->makeSound();
	return 0;
}
