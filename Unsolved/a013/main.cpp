#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* reverse array position of input
   dynamic space is its advantage */
string converge(string bigN) {
    int size = bigN.size();
    string storage;
    reverse(bigN.begin(), bigN.end());
    for (int i=0 ; i<size ; i++) {
        storage += bigN[i];
    }
    return storage;
}

// calculating using string
void add(string a, string b) {
    int carry = 0;
    int size = 0;

    if (a.size() > b.size()) {
        size = a.size();
    }

    string c = "";
    for (int i=0 ; i<size ; i++) {
        c[i] = a[i] + b[i] + carry;
        carry = c[i]/10;
        c[i] %= 10;
    }
}

int main() {
    string a, b;
    cin >> a >> b;

    // cout << add(converge(a), converge(b));
    return 0;
}