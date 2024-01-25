//Create a base class Animal with a method makeSound(). Derive two classes Dog and Cat from Animal
// and override the makeSound() method to represent the sound each animal makes.
#include<iostream>
using namespace std;

class Animal{
	public:
	virtual void makeSound(){
		cout<<"General Animal's sounds:"<<endl;
	}
};
class Dog:public Animal{
	public:
		void makeSound()override{
			cout<<"Woof! Woof!"<<endl;
		}
};
class Cat:public Animal{
	public:
		void makeSound()override{
			cout<<"Meow! Meow!"<<endl;
		}
};
int main() {
    Animal*dptr= new Dog();           //dptr is a pointer for class dog
    Animal*cptr= new Cat();           //cptr is a pointer for class cat
    cout << "Animal 1 says: ";
    dptr->makeSound();

    cout << "Animal 2 says: ";
    cptr->makeSound();

    delete dptr;
    delete cptr;

    return 0;
}
