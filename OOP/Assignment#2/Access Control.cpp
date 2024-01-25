//Define a base class Base and a derived class Derived.
// Test the accessibility of different members (public, private, protected) from the derived class.
#include <iostream>

class Base {
public:
    int publicMemberBase;

    Base() : publicMemberBase(1), protectedMemberBase(2), privateMemberBase(3) {}

    void publicFunctionBase() {
        std::cout << "Public function in the Base class" << std::endl;
    }

    void accessMembersInBase() {
        std::cout << "Accessing members in the Base class:" << std::endl;
        std::cout << "Public Member (publicMemberBase): " << publicMemberBase << std::endl;
        std::cout << "Protected Member (protectedMemberBase): " << protectedMemberBase << std::endl;
        std::cout << "Private Member (privateMemberBase): " << privateMemberBase << std::endl;
    }

protected:
    int protectedMemberBase;

private:
    int privateMemberBase;
};

class Derived : public Base {
public:
    void accessMembersInDerived() {
        std::cout << "Accessing members in the Derived class:" << std::endl;
        std::cout << "Public Member (publicMemberBase): " << publicMemberBase << std::endl;
        std::cout << "Protected Member (protectedMemberBase): " << protectedMemberBase << std::endl;
        // Private member from the base class is not accessible in the derived class.
        // std::cout << "Private Member (privateMemberBase): " << privateMemberBase << std::endl;
    }

    void callFunctionInBase() {
        publicFunctionBase(); // Public member function from the base class is accessible.
    }
};

int main() {
    Base baseObject;
    Derived derivedObject;

    std::cout << "Testing access from the base class:" << std::endl;
    baseObject.accessMembersInBase();

    std::cout << "\nTesting access from the derived class:" << std::endl;
    derivedObject.accessMembersInDerived();

    std::cout << "\nTesting access to base class function from the derived class:" << std::endl;
    derivedObject.callFunctionInBase();

    return 0;
}

