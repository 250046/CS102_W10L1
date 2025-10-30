#include <iostream>
using namespace std;


void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;


    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;


    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
