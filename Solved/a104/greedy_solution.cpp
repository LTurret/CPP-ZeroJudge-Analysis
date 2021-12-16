#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int counts;
    while(cin >> counts) {
        vector<int> sq;
        for (int i=0; i<counts; i++) {
            long int inp;
            cin >> inp;
            sq.insert(begin(sq), inp);
        }

        sort(begin(sq), end(sq));
        for (auto& e:sq) cout << e << " ";
        cout << endl;
    }

    return 0;
}