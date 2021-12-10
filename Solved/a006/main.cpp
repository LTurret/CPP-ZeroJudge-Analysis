#include <iostream>
#include <cmath>

using namespace std;

int calc(int coefs[3], int i)
{
    int result;
    result = pow(coefs[1], 2);
    result -= 4*(coefs[0]*coefs[2]);
    result = sqrt(result);
    if (result < 0)
    {
        cout << "No real root";
        exit(0);
    } else {
        if (i == 1)
        {
            result = -coefs[1] + result;
        } else if (i == 2) {
            result = -coefs[1] - result;
        }
        result /= (2*coefs[0]);
        return result;
    }
}

int main()
{
    int coefs[3], pr,nr,roots[2];
    cin >> coefs[0] >> coefs[1] >> coefs[2];
    for (int i=1 ; i<=2 ; i++)
    {
        roots[i-1] = calc(coefs, i);
    }
    try
    {
        if (roots[0] == roots[1]) {
            cout << "Two same roots x=" << roots[0];
        } else if (roots[0] != roots[1]) {
            cout << "Two different roots x1="<< roots[0] << " , x2=" << roots[1];
        }
    }
    catch(const exception& e)
    {
        cout << "No real root";
    }
    return 0;
}