#include <iostream>

using namespace std;

int main () {
    int n;
    while(cin >> n) {
        int result = 0;
        if (n>40) {
            result = 100;
        } else {
            for (int i=1; i<=n; i++) {
                if (i<=10) {
                    result += 6;
                }
                else if (i>10 and i<=20) {
                    result += 2;
                }
                else if (i>20 and i<=40) {
                    result += 1;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}