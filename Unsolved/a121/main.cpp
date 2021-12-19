#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int is_prime(int x)
{
    if(x < 2) return 0;
    for(int i = 2; i * i <= x; ++i)
        if(x % i == 0) return 0;
    return 1;
}

int main() {
    vector<int> nums(2,0);
    int result = 0;
    while (cin >> nums[0] >> nums[1]) {
        result = 0;
        if (nums[0] > nums[1]) reverse(nums.begin(), nums.end());
        for (int p=nums[0]; p<=nums[1]; p++) {
            if (is_prime(p) == 1) {
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}