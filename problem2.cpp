#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    float sum = 0;
    float num_of_items = 0;
    float average = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        num_of_items++;
    }

    average = sum/num_of_items;
    
    cout << average << endl;
    
    return 0;
}
