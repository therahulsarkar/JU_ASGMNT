#include <iostream>
#include <string>

using namespace std;


class Base {
public:
   
    Base(const string& message) : message(message) {
        cout << "Base Parameterized Constructor : " << message << endl;
    }

   
    Base(const Base& other) {
        message = other.message;
        cout << "Base Copy Constructor : " << message << endl;
    }
    virtual ~Base() {
        cout << "Base Virtual Destructor : " << message << endl;
    }

protected:
    string message;
};


int main() {
    cout << "Creating Base object b1:" << endl;
    Base b1("Hello, from Base!");

    cout << "\nCreating Base object b2 with b1(Copy Constructor):" << endl;
    Base b2 = b1;

    cout << "\nDestructors being called." << endl;

    return 0;
}
