#include <iostream>
using namespace std;


bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;

    cout << "Enter the number of elements in each list: ";
    cin >> size;

    int* list1 = new int[size];
    int* list2 = new int[size];

    cout << "Enter " << size << " integers for list1: ";
    for (int i = 0; i < size; i++) {
        cin >> list1[i];
    }

    cout << "Enter " << size << " integers for list2: ";
    for (int i = 0; i < size; i++) {
        cin >> list2[i];
    }

    if (strictlyEqual(list1, list2, size))
        cout << "The two lists are strictly identical." << endl;
    else
        cout << "The two lists are not strictly identical." << endl;

    delete[] list1;
    delete[] list2;

    return 0;
}
