#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string in;
    cin >> in;

    reverse(begin(in), end(in));
    int iin = stoi(in);

    if (in.size() > 1) cout << iin;

    return 0;
}