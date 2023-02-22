#include <iostream>
using namespace std;


void showPoint(int a, int b) {
    int i , j;
    bool flag;
    for(i = a + 1; i <= b; i++) {
        flag = false;
        for (j = 2; j < i; j++)
        {
            if(i%j == 0) {
                flag = true;
                break;
            }
        }
        if(flag == false && i > 1){
            cout << i << endl;
        }
        
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    showPoint(x, y);
    return 0;
}