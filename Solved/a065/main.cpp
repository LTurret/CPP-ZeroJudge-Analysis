#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ptr = 0;
    string n;
 
    while(cin >> n) {
        while(ptr < 6) {
            cout << abs(int(n[ptr]) - int(n[ptr+1]));
            ptr++;
        }
        ptr = 0;
        cout << "\n";
    }

    return 0;
}