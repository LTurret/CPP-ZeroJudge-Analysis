#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    while(cin >> n) {
        bool checker = true;
        for(int i=0; i<=n.size(); ++i) {
            if(n[i] != n[n.size()-1-i]) {
                checker = false;
            }
        }

        if (checker) {
            cout << "yes !";
        } else cout << "no...";
        cout << endl;
    }

    return 0;
}