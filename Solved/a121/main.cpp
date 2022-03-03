#include <iostream>

using namespace std;

int main(void)
{
  int a, b;
  while (cin >> a >> b)
  {
    int count = 0;
    for (int i = a; i <= b; ++i)
    {
      if (i == 1)
        continue;
      bool yes = true;
      for (int j = 2; j * j <= i; ++j)
        if (i % j == 0)
        {
          yes = false;
          break;
        }
      if (yes)
        ++count;
    }
    cout << count << '\n';
  }
  return 0;
}