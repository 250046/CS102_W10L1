#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (n ≥ 3): ";
    cin >> n;

    int a[100];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int uniqueIndex = -1;
    int commonValue;


    if (a[0] == a[1])
        commonValue = a[0];
    else if (a[0] == a[2])
        commonValue = a[0];
    else
        commonValue = a[1];


    for (int i = 0; i < n; ++i) {
        if (a[i] != commonValue) {
            uniqueIndex = i + 1;
            break;
        }
    }

    cout << uniqueIndex << endl;

    return 0;
}
