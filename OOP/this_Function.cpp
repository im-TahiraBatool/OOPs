#include <iostream>
using namespace std;

class MyClass {
public:
    void setX(int x) {
        this->x = x;
    }
    int getX() {
        return x;
    }
private:
    int x;
};

int main() {
    MyClass obj;
    obj.setX(10);
    cout << obj.getX() << endl;
    return 0;
}

