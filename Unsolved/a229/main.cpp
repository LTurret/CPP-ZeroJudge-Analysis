#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

vector<string> generator(int n) {
    vector<string> product = {};
    for (int i=0; i<n; i++) {
        product.insert(end(product), "(");
    }
    for (int i=0; i<n; i++) {
        product.insert(end(product), ")");
    }
    return product;
}

int main() {
    int n;
    cin >> n;
    vector<string> coloms = generator(n);

    // for (auto& e : coloms) cout << e;

    vector<int> opp = {};
    for (int i=0; i<n; i++) opp.insert(end(opp),n);
    
    while(opp[0] != 0) {
        opp[0] = opp[0] - 1;
    }
    for (auto& e : opp) cout << e;

    return 0;
}