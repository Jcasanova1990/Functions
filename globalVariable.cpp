#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable, accessible everywhere in this file

void printGlobal() {
    cout << "Global variable inside printGlobal(): " << globalVar << endl;
}

int main() {
    cout << "Global variable inside main(): " << globalVar << endl;
    globalVar = 200;  // Modify global variable
    printGlobal();
    return 0;
}
