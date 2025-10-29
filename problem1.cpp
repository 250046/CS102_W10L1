#include <iostream>
using namespace std;

int main(){
    int usrArrayNum;
    cin >> usrArrayNum;
    int anArray[usrArrayNum];
    int sum = 0;
    
    for (int i = 0; i<usrArrayNum; ++i){
        cin >> anArray[i];
        sum += anArray[i];
    }
    cout << "sum=" << sum << endl;
    return 0;
}
