#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string in;
    cin >> in;
    string pin = in;
    int checker = true;

    reverse(in.begin(), in.end());

    for (int i=0; i<in.size() ; i++) {
        if (in[i] == pin[i]) {
            checker *= true;
        } else checker *= false;
    }

    if (checker) {
        cout << "yes";
    } else cout << "no";

    return 0;
}