#include <iostream>
using namespace std;




void greet(string *name) {
    *name = "Guest";  // Dereference and modify original
    cout << "Hello, " << *name << endl;
}

int main() {
    string myName = "Alan";
    greet(&myName);  // Outputs: Hello, Guest
    cout << myName << endl;  // Outputs: Guest

    return 0;
}
