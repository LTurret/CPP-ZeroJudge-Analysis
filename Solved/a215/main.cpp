#include <iostream>

using namespace std;

int main() {
    int n,m;
    while(cin >> n >> m) {
        int c=0, sum=0;
        while (sum<=m) {
            sum += n;
            n++;
            c++;
        }
        if (c == 0) {
            cout << 1;
        } else cout << c;

        cout << endl;
    }

	return 0;
}