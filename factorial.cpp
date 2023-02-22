#include <iostream>
using namespace std;

int main() {
    long x, i, fact = 1;
    cin >> x;
    if(x == 0) {
        cout << 1;
    }
    else if(x > 0) {
        for(i = 1; i <= x; i++) {
            fact *= i;
        }
        cout << fact;
    }
    else {
        cout << "pleas enter the abs number" << endl;
    }
    return 0;
}