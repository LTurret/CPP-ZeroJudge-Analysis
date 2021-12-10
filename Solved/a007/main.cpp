#include<iostream>
using namespace std;

int main()
{
    char c;

    while(true)
    {
        c = cin.get();
        cout << c << "   " << (int)c;
    }

    return 0;
}