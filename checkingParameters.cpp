#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 0;

    try {
        if (num2 == 0) {
            throw runtime_error("Cannot divide by zero.");
        } else {
            cout << num1 / num2 << endl;
        }
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
