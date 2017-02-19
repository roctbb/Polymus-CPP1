#include <iostream>

using namespace std;

int main() {
    int col = 1;
    int sum = 0;
    int a;
    cin >> a;
    while (a != 0) {
        sum += a;
        col++;
        cin >> a;
    }
    cout << (float) sum / col;
}
