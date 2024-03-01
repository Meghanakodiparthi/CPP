#include <iostream>
using namespace std;
int main() {
    char n;
    cout << "Enter a character: ";
    cin >> n;
    n = tolower(n);
    if (isalpha(n)) {
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
            cout << n << " is a vowel." << endl;
        else
            cout << n << " is a consonant." << endl;
    } else {
        cout << "Invalid input. Please enter an alphabet character." << endl;
    }

    return 0;
}

