/*
🔍 Summary:
This C++ program prints a triangular number pattern for multiple test cases, starting each row from 1.

1. The program first asks the user to input `t` – the number of test cases.
2. For each test case, it prompts the user to enter a number `n`, which determines the number of rows in the pattern.
3. For each row `i` (from 1 to `n`), it prints numbers starting from 1 up to `i`.
4. Each new row has one more number than the previous row, forming a right-angled triangle of increasing numbers.

📌 Example:
Input:
t = 1  
n = 4

Output:
1  
1 2  
1 2 3  
1 2 3 4
*/


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){

 // This is the outer loop which will loop for the rows.

    for(int i = 1 ; i <= n ; i++){

 // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers from 1 to the row number
       // instead of stars in each row.

        for(int j= 1; j <= i ; j++){
      cout<< j << " ";
        }
    // As soon as numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.

       cout<< endl;
    }
}

int main() {


    // this ip is for no if test cases 
    int t;
    cout<< "enter the Number of Test Case"<<endl;
    cin>> t;
    for (int i = 0; i <= t; i++){
         int n;
           cout << "No of itteration" << endl; 
         cin>>n;  //this input is for no of no of itteration
         printPattern(n);
    }
    
    return 0;
}