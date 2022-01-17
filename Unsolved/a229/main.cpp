#include <iostream>
#include <vector>
#include <string>

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
    vector<string> scope = {};
    int n;
    cin >> n;
    scope = generator(n);

    for (auto& e : scope) cout << e;
    
    return 0;
}