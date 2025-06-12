#include <bits/stdc++.h>
using namespace std;
int reverseDigits(int num)
{
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    return reverse;
}
int main()
{
    int num = 9696;
    cout << "Reverse of num is " << reverseDigits(num);
    getchar();
    return 0;
}