// Reverrce the array
// Using Only one Oparetor

#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s)
{

    if (i >= s.size() / 2){return true;}
    if (s[i] != s[s.size() - i - 1]) {return false;}
    return f(i + 1, s);
}

// void f(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//         return;
//     swap(arr[i], arr[n - i - 1]);
//     f(i + 1, arr, n);
// }

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    // f(0, arr, n);
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // Ceakfor if an strig is palindorem
    string s;
    cin >> s;
    cout << f(0, s);
    return 0;
}