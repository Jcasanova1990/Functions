#include <iostream>
using namespace std;

void greet(string name) {
    name = "Guest";  // Doesn't affect original
    cout << "Hello, " << name << endl;
}

int main() {
    string myName = "Alan";
    greet(myName);  // Outputs: Hello, Guest
    cout << myName << endl;  // Outputs: Alan

    return 0;
}
