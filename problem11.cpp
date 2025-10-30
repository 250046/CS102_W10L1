#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int nums[100];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;


    bool found = false;
    for (int i = 0; i < n - 1 && !found; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
