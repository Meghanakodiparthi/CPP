#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    int rounded_floor = floor(num);
    int rounded_ceil = ceil(num);
    cout << "Original number: " << num << endl;
    cout << "Rounded to the nearest integer using floor function: " << rounded_floor << endl;
    cout << "Rounded to the nearest integer using ceil function: " << rounded_ceil << endl;
	return 0;
}

