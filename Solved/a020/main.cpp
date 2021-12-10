#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> letter = {
        10, 11, 12, 13, 14, 15, 16, 17, 
        34, 18, 19, 20, 21, 22, 35, 23,
        24, 25, 26, 27, 28, 29, 32, 30,
        31, 33 };

    string code;
    getline(cin, code);

    int location = letter[int(code[0])-65];
    int validfied = location/10 + 9*(location%10);

    for (int i=1 ; i<code.size()-1 ; i++) {
        validfied += (int(code[i])-48)*(9-i);
    }
    validfied += int(code[code.size()-1])-48;

    if (validfied % 10 == 0) {
        cout << "real";
    } else cout << "fake";
}