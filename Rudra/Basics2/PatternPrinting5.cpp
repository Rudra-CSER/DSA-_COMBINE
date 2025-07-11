#include <bits/stdc++.h>
using namespace std;

//  void print2(int n){
//  for(int i =0;i<n;i++){
//  for(int j= 0 ; i< n ; j++){}
//      cout<<"* ";
//    }
//    cout<< endl;
// }

// void print5(int n){

//  for(int i =0;i<n;i++){
//  for(int j= 0 ; i< n-i+1 ; j++){}
//      cout<<"* ";
//    }
//    cout<< endl;
// }
void print10(int n)
{
  for (int i = 1; i < 2 * n - 1; i++)
  {
    int starts = i;
    if (i > n)
      starts = 2 * n - i;
    for (int j = 1; j <= starts; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void print11(int n)
{
  int start = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void print12(int n)
{
  int space = 2 * (n - 1);
  for (int i = 1; i <= n; i++)
  {
    // num
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    // space
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }

    // num
    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
    space -= 2;
  }
}

void print13(int n)
{
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}

void print14(int n)
{
  for (int i = 0; i <= n; i++)
  {

    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}

void print15(int n)
{
  for (int i = 0; i < n; i++)
  {

    for (char ch = 'A'; ch < 'A' + (n - i - 1); ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
// printing the step with no of
// test case + no of itteration
void print16(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      char ch = 'A' + i;
      cout << ch << " ";
    }

    cout << endl;
  }
}

void print17(int n)

{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }

     char ch = 'A' ;
    // adding a char BRake point that it will no be incremented further
    char BrakePoint = (2 * i + 1) / 2;

    for (int j = 1; j <= 2 * i + 1; j++)
    {

      cout << ch << " ";
      if (j <= BrakePoint)
        ch++;
      else
        ch--;
    }

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void print18(int n)
{
  int spaces = 0;
    for(int i= 0; i<n ;i++){
        for(int j=1 ; j<=n-i ;j++){
            cout<<"*";
        }
        for(int j=0 ; j<spaces ;j++){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ;j++){
            cout<<"*";
            }
     spaces+=2;
     cout<< endl;
    }
  
  spaces = 2*n -2;
    for(int i= 1; i<=n ;i++){
        for(int j=1 ; j<=i ;j++){
            cout<<"*";
        }
        for(int j=0 ; j<spaces ;j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i ;j++){
            cout<<"*";
            }
     spaces-=2;
     cout<< endl;
    }
  
 
}
int main()
{
  // make sure to upload on git
  int t;
  cin >> t; // if we initialize i with 0 the Test case will run 0,1(2ti)
  for (int i = 1; i <= t; i++)
  {

    int n;
    cout << "Enter The input";
    cin >> n;
    // print16(n);
    // cout<<"" << endl;
    // print15(n);
    // cout<<"" << endl;
    // print14(n);
    // print13(n);
    // print12(n);
    print18(n);
  }
  return 0;
}