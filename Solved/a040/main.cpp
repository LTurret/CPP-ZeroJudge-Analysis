#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    string result;
    string in1, in2;
    cin >> in1 >> in2;
    
    // get range
    for (int j=stoi(in1); j<=stoi(in2); j++) {
        int sum = 0;
        int len = to_string(j).length();

        // Armstrong number calculation
        string sj = to_string(j);
        for (auto& k : sj) {
            sum += pow((int(k)-48), len);
        }
        if (sum == j) result += to_string(sum) + " ";
    }

    if (result.length() != 0) cout << result; else cout << "none";
    return 0;
}