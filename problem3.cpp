#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int minimum;

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    minimum = arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << minimum;
    return 0;
}
