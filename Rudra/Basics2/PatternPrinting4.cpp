#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void print5(int n)
{
  /*
 🔍 Summary:
 This function `print5(int n)` prints an inverted right-angled triangle pattern of asterisks (`*`).

 📌 How it works:
     1. The outer loop `for(int i = 1; i <= n; i++)` controls the number of rows (from 1 to `n`).
     2. The inner loop `for(int j = 0; j < n - i + 1; j++)` controls the number of asterisks printed in each row.
       - For the first row (i=1), it prints `n` asterisks.
       - For the second row (i=2), it prints `n-1` asterisks.
       - ...
       - For the last row (i=n), it prints 1 asterisk.
     3. Each row ends with a line break using `cout << endl;`.

    🧾 Example:
    If `n = 4`, the output will be:
   */
  for (int i = 1 /*4*/; i <= n; i++)
  {
    for (int j = 0 /*2*/; j < n - i + 1; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
}
void print6(int n){
  for (int i = 0 /*4*/; i <= n; i++)
  {
    for (int j = 1 /*2*/; j < n - i + 1; j++)
    {
      cout << j;
    }

    cout << endl;
  }
}
void print7(int n){
  for (int i=0; i < n; i++){
    // space
    for (int k=0; k<n-i-1; k++){
      cout << " ";
    }

    // star
    for (int k=0;k<2*i+1; k++){
      cout << "*";
    }

    // space
    for (int k=0; k<n-i-1 ; k++){
      cout << " ";
    }
  cout << endl;
  }
}

int main()
{
  int t;
  cin >> t; // if we initialize i with 0 the Test case will run 0,1(2ti)
  for (int i = 1; i <= t; i++)
  {

    int n;
    cout << "Enter The input";
    cin >> n;
    print7(n);
  }
  return 0;
}