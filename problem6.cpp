#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    char* arr = new char[n];

    cout << "Enter " << n << " characters separated by space: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int upperCount = 0, lowerCount = 0, digitCount = 0, specialCount = 0;

    for (int i = 0; i < n; i++) {
        if (isupper(arr[i]))
            upperCount++;
        else if (islower(arr[i]))
            lowerCount++;
        else if (isdigit(arr[i]))
            digitCount++;
        else
            specialCount++;
    }

    cout << "\nUppercase: " << upperCount << endl;
    cout << "Lowercase: " << lowerCount << endl;
    cout << "Digit: " << digitCount << endl;
    cout << "Special: " << specialCount << endl;

    delete[] arr;

    return 0;
}
