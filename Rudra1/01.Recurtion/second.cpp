#include <bits/stdc++.h>

using namespace std;

// Prints a name 'maxCount' times.
void printName(int currentCount, int maxCount) {
    if (currentCount > maxCount) {
        return; // Base case
    }
    cout << "Rudra" << endl;
    printName(currentCount + 1, maxCount); // Recursive call
}

// Prints numbers from 1 to 'maxNum' in ascending order (direct recursion).
// Prints BEFORE the recursive call.
void printNumbersAscendingDirect(int currentNum, int maxNum) {
    if (currentNum > maxNum) {
        return; // Base case
    }
    cout << currentNum << endl;
    printNumbersAscendingDirect(currentNum + 1, maxNum);
}

// Prints numbers from 'minNum' down to 1 in descending order (direct recursion).
// Prints BEFORE the recursive call.
void printNumbersDescendingDirect(int currentNum, int minNum) {
    if (currentNum < minNum) {
        return; // Base case
    }
    cout << currentNum << endl;
    printNumbersDescendingDirect(currentNum - 1, minNum);
}

// Prints numbers from 1 to 'targetMax' in ascending order (indirect recursion).
// Prints AFTER the recursive call returns (on stack unwind).
void printNumbersAscendingIndirect(int currentNum, int targetMin) {
    if (currentNum < targetMin) {
        return; // Base case
    }
    printNumbersAscendingIndirect(currentNum - 1, targetMin); // Recurse first
    cout << currentNum << endl;                               // Print after
}

// Prints numbers from 'targetMax' down to 1 in descending order (indirect recursion).
// Prints AFTER the recursive call returns (on stack unwind).
void printNumbersDescendingIndirect(int currentNum, int targetMax) {
    if (currentNum > targetMax) {
        return; // Base case
    }
    printNumbersDescendingIndirect(currentNum + 1, targetMax); // Recurse first
    cout << currentNum << endl;                                // Print after
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "\n--- Printing Name 'Rudra' n times ---" << endl;
    printName(1, n);

    cout << "\n--- Printing Numbers 1 to n (Ascending - Direct) ---" << endl;
    printNumbersAscendingDirect(1, n);

    cout << "\n--- Printing Numbers n to 1 (Descending - Direct) ---" << endl;
    printNumbersDescendingDirect(n, 1);

    cout << "\n--- Printing Numbers 1 to n (Ascending - Indirect) ---" << endl;
    printNumbersAscendingIndirect(n, 1);

    cout << "\n--- Printing Numbers n to 1 (Descending - Indirect) ---" << endl;
    printNumbersDescendingIndirect(1, n);

    return 0;
}