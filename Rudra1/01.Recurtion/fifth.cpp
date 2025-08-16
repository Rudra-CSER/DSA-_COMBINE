#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{

    if (n <= 1)
    {
        return n;
    }

    int lastDigit = fibo(n - 1);
    int SecondLastDigit = fibo(n - 2);
    return lastDigit + SecondLastDigit;
}

int main()
{
    int n;
    cin >> n;
        cout<< "fibo number of "<<fibo(n) << ",";
    return 0;
}