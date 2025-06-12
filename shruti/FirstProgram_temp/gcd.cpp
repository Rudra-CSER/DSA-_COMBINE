#include <iostream>
using namespace std;

class Solution {
public:
    int gcd(int N1, int N2) {
        while (N2 != 0) {
            int temp = N2;
            N2 = N1 % N2;
            N1 = temp;
        }
        return N1;
    }
};

int main() {
    Solution sol;
    int N1, N2;
    cout << "Enter two integers: ";
    cin >> N1 >> N2;
    cout << "GCD of " << N1 << " and " << N2 << " is: " << sol.gcd(N1, N2) << endl;
    return 0;
}
