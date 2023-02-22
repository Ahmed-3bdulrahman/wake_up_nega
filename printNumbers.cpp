#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    for(int i = x+1; i <= y-1; i++) {
        cout << i << endl;
    }
    return 0;
}