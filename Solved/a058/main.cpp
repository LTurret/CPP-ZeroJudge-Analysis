#include <iostream>

using namespace std;

int main() {
    int lmt, ts=0, n;
    int s[3] = {0,0,0};
    cin >> lmt;
    while (ts < lmt) {
        cin >> n;
        s[n%3]++;
        ts++;
    }

    cout << s[0] << " "
         << s[1] << " "
         << s[2] << " ";

    return 0;
} 