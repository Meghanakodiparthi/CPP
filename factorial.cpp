#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long fact = 1; 
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Error! Factorial of a negative number is undefined." << endl;
        return 1; 
		}
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << num << " = " << fact << endl;

    return 0;
}

