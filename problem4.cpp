#include <iostream>
using namespace std;


int indexOfLargest(double array[], int size) {
    int indexMax = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > array[indexMax]) {
            indexMax = i;
        }
    }
    return indexMax;
}


int main() {
    const int SIZE = 15;
    double arr[SIZE];

    cout << "Enter 15 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxIndex = indexOfLargest(arr, SIZE);
    cout << "Index of largest number: " << maxIndex << endl;
    cout << "Largest number: " << arr[maxIndex] << endl;

    return 0;
}
