#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    const int ROLLS = 10000;
    int counts[6] = {0};

    srand(time(0));


    for (int i = 0; i < ROLLS; ++i) {
        int roll = rand() % 6 + 1;
        counts[roll - 1]++;
    }


    cout << "Results after rolling a die " << ROLLS << " times:\n";
    for (int i = 0; i < 6; ++i) {
        cout << "Face " << (i + 1) << ": " << counts[i] << " times\n";
    }

    return 0;
}
