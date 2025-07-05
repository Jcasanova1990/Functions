Correct Example of Local Scope
#include <iostream>
using namespace std;

void printNumber() {
    int num = 10;  // num has local scope inside printNumber()
    cout << "Number inside function: " << num << endl;
}

int main() {
    printNumber();
    // cout << num;  // ERROR! num is not accessible here (out of scope)
    return 0;
}




Incorrect Example of Local Scope (Accessing a Local Variable Outside Its Scope)
#include <iostream>
using namespace std;

void printNumber() {
    int num = 10;  // local variable
}

int main() {
    printNumber();
    cout << num << endl;  // ERROR: 'num' was not declared in this scope
    return 0;
}