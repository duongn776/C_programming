#include <iostream>
using namespace std;

// Hàm tính UCLN
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b - 1; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcd(i, j) == 1) {
                cout << "(" << i << "," << j << ")\n";
            }
        }
    }

    return 0;
}
