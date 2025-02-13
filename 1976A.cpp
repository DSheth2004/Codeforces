#include <iostream>
#include <string>
using namespace std;

// Function to check if a password is strong
bool isStrongPassword(const string& password) {
    int n = password.length();
    string digits, letters;

    // Separate digits and letters
    for (char ch : password) {
        if (isdigit(ch)) {
            digits.push_back(ch);
        } else if (islower(ch)) {
            letters.push_back(ch);
        }
    }

    // Check if digits are sorted in non-decreasing order
    for (int i = 1; i < digits.size(); ++i) {
        if (digits[i] < digits[i - 1]) {
            return false;
        }
    }

    // Check if letters are sorted in non-decreasing order
    for (int i = 1; i < letters.size(); ++i) {
        if (letters[i] < letters[i - 1]) {
            return false;
        }
    }

    // Check if there is any digit after a letter in the original password
    bool seenLetter = false;
    for (char ch : password) {
        if (islower(ch)) {
            seenLetter = true;
        } else if (isdigit(ch) && seenLetter) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string password;
        cin >> n >> password;

        if (isStrongPassword(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
