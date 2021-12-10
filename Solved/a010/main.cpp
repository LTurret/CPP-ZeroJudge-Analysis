#include <iostream>

using namespace std;

int main() {
    int num, q=2, n;

    cin >> num;

    while (num >= q) {
        if (num%q == 0) {
            n = 0;
            while (num%q == 0) {
                num = num/q;
                n++;
            }
            if (n == 1) {
                cout << q;
            } else {
                cout << q << "^" << n;
            }
            if (num != 1) {
                cout << " * ";
            }
        }
        q++;
    }

    return 0;
}