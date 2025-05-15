#include <bits/stdc++.h>
using namespace std;

//  mergeshort -- o(n)

// when a fnt calls itself untill spcified condition it meets

void f(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    f(n - 1);
}

int main()
{
    int n = 5;
    f(n);
}

#include <bits/stdc++.h>
using namespace std;


int sum(int n) {
    if (n == 0) return 0;        
    return n + sum(n - 1);       
}

int main() {
    int n = 5;
    int result = sum(n);
    cout << "Sum from 1 to " << n << " is: " << result << endl;
    return 0;
}


// reverse the array using recurtion

#include <iostream>
using namespace std;
//for printing hte previos array 
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//for Reversing the array 
void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;  // base case

    // Swap elements
    swap(arr[start], arr[end]);

    // Recursively reverse the subarray
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Print the original array
    cout << "Previous array: ";
    printArray(arr, n);

    // Reverse the array using recursion
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}
