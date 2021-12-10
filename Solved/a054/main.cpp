#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> code = {
        10, 11, 12, 13, 14, 15, 16,
        17, 34, 18, 19, 20, 21, 22,
        35, 23, 24, 25, 26, 27, 28,
        29, 32, 30, 31, 33
    };
    vector<string> city = {
        "A", "B", "C", "D", "E", "F", "G",
        "H", "I", "J", "K", "L", "M", "N",
        "O", "P", "Q", "R", "S", "T", "U",
        "V", "W", "X", "Y", "Z"
    };

    string n;
    cin >> n;

    int loc_sum = 0;

    for (int i=0; i<n.size(); i++) {
        loc_sum += (int(n[i])-48) * (8-i);
    }

    for (int i=0; i<code.size(); i++) {
        int location = code[i]/10 + (code[i]%10)*9;
        if ((10-((location + loc_sum)%10))%10 == int(n[n.size()-1])-48) {
            cout << city[i];
        }
    }

    return 0;
}