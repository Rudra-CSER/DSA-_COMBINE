#include <bits/stdc++.h>
using namespace std;

/*
 * STL (Standard Template Library) Learning Guide - Updated Version
 * 
 * STL consists of:
 * 1. Containers (data structures like vector, queue, set, multiset, etc.)
 * 2. Algorithms (functions like sort, find, etc.)
 * 3. Iterators (objects that point to elements)
 * 4. Functions (function objects/functors)
 */

// ============================================
// PAIRS - Used to s f tore two values together
// ============================================
void demonstratePairs() {
    cout << "\n=== PAIRS DEMONSTRATION ===" << endl;
    
    // Basic pair creation
    pair<int, int> basicPair = {1, 2};
    cout << "Basic pair: " << basicPair.first << " " << basicPair.second << endl;
    
    // Nested pairs - pair containing another pair
    pair<int, pair<int, int>> nestedPair = {1, {3, 4}};
    cout << "Nested pair access: " << nestedPair.second.first << endl;
    
    // Array of pairs (relies on utility library)
    pair<int, int> pairArray[] = {{1, 2}, {3, 3}, {4, 4}};
    cout << "Pair array: ";
    for (int i = 0; i < 3; i++) {
        cout << "(" << pairArray[i].first << "," << pairArray[i].second << ") ";
    }
    cout << endl;
}

// ============================================
// VECTORS - Dynamic arrays with detailed operations
// ============================================
void demonstrateVectors() {
    cout << "\n=== VECTORS DEMONSTRATION ===" << endl;
    
    // 1. Creating and adding elements
    vector<int> v; // empty vector/array
    v.push_back(1); // push (1) to the empty arr, now v = {1}
    v.emplace_back(2); // much faster than push_back
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout << "Vector after adding elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // 2. Vector of pairs
    vector<pair<int, int>> pairVec;
    pairVec.push_back({1, 2});
    pairVec.emplace_back(3, 4); // much faster than push_back
    
    cout << "Vector of pairs: ";
    for (auto& p : pairVec) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;
    
    // 3. Vector with initial size and value
    vector<int> filledVec(5, 100); // {100,100,100,100,100} where 5 = size, 100 = element
    cout << "Filled vector: ";
    for (int x : filledVec) cout << x << " ";
    cout << endl;
    
    // 4. Copying vector values
    vector<int> v1(5, 20);
    vector<int> v2(v1);
    cout << "Copied vector: ";
    for (int x : v2) cout << x << " ";
    cout << endl;
    
    // 5. Iterators
    vector<int>::iterator it = v.begin(); // memory location of first element
    it++;
    cout << "Second element using iterator: " << *it << endl;
    
    // 6. Different iterator types
    // v.end() - memory location after last element
    // v.rend() - memory location before the first element (reverse end)
    // v.rbegin() - memory location of last element (reverse begin)
    
    // 7. Accessing elements (similar to arrays)
    cout << "Element at index 1: " << v[1] << endl;
    
    // 8. Printing using iterators
    cout << "Using iterator loop: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 9. Shortcut form using auto
    cout << "Using auto: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    // 10. Erase operations
    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    v.erase(v.begin() + 1); // removes element at index 1
    cout << "After erasing index 1: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // Reset vector for range erase demo
    v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 1, v.begin() + 3); // removes elements from index 1 to 2
    cout << "After range erase: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    
    // 11. Insert operations
    vector<int> insertVec(2, 100); // {100, 100}
    insertVec.insert(insertVec.begin(), 300); // {300, 100, 100}
    cout << "After insert at begin: ";
    for (int x : insertVec) cout << x << " ";
    cout << endl;
    
    insertVec.insert(insertVec.begin() + 1, 2, 5); // {300, 5, 5, 100, 100}
    cout << "After inserting 2 copies of 5: ";
    for (int x : insertVec) cout << x << " ";
    cout << endl;
    
    vector<int> copyVec(2, 50); // {50, 50}
    insertVec.insert(insertVec.begin(), copyVec.begin(), copyVec.end());
    cout << "After inserting another vector: ";
    for (int x : insertVec) cout << x << " ";
    cout << endl;
    
    // 12. Size and other operations
    cout << "Vector size: " << insertVec.size() << endl;
    
    // 13. Pop back
    insertVec.pop_back();
    cout << "After pop_back: ";
    for (int x : insertVec) cout << x << " ";
    cout << endl;
    
    // 14. Swap vectors
    vector<int> vec1 = {1, 2};
    vector<int> vec2 = {3, 4};
    cout << "Before swap - vec1: ";
    for (int x : vec1) cout << x << " ";
    cout << "vec2: ";
    for (int x : vec2) cout << x << " ";
    cout << endl;
    
    vec1.swap(vec2);
    cout << "After swap - vec1: ";
    for (int x : vec1) cout << x << " ";
    cout << "vec2: ";
    for (int x : vec2) cout << x << " ";
    cout << endl;
    
    // 15. Clear and empty check
    vec1.clear();
    cout << "Is vec1 empty after clear? " << (vec1.empty() ? "Yes" : "No") << endl;
}

// ============================================
// QUEUE - First In First Out (FIFO)
// ============================================
void demonstrateQueue() {
    cout << "\n=== QUEUE DEMONSTRATION ===" << endl;
    
    queue<int> q;
    
    // Adding elements
    q.push(1);
    q.push(2);
    q.emplace(4); // faster than push
    
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    
    // Modify back element
    q.back() += 5; // back element becomes 4 + 5 = 9
    cout << "Back element after adding 5: " << q.back() << endl;
    
    // Print and remove all elements
    cout << "Queue elements (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    // Note: Cannot access front() or back() on empty queue
    cout << "Queue is now empty" << endl;
}

// ============================================
// MULTISET - Sorted container that allows duplicates
// ============================================
void demonstrateMultiset() {
    cout << "\n=== MULTISET DEMONSTRATION ===" << endl;
    
    multiset<int> ms;
    
    // Adding elements
    ms.insert(1);
    ms.insert(2);
    ms.insert(2); // duplicates allowed
    ms.insert(3);
    ms.insert(4);
    ms.emplace(2); // another duplicate
    
    cout << "Multiset elements (automatically sorted): ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;
    
    // Finding elements
    auto it = ms.find(2);
    if (it != ms.end()) {
        cout << "Found element: " << *it << endl;
    }
    
    // Count occurrences
    int count = ms.count(2);
    cout << "Count of 2: " << count << endl;
    
    // Erase operations
    ms.erase(ms.find(2)); // removes only one occurrence of 2
    cout << "After erasing one occurrence of 2: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;
    
    // Erase all occurrences of a value
    ms.erase(2); // removes all occurrences of 2
    cout << "After erasing all occurrences of 2: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;
    
    // Lower and upper bound
    ms.insert(5);
    ms.insert(5);
    ms.insert(7);
    
    cout << "Final multiset: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;
    
    auto lower = ms.lower_bound(5);
    auto upper = ms.upper_bound(5);
    cout << "Elements equal to 5: ";
    for (auto it = lower; it != upper; it++) {
        cout << *it << " ";
    }
    cout << endl;
}

// ============================================
// SET - Sorted container with unique elements
// ============================================
void demonstrateSet() {
    cout << "\n=== SET DEMONSTRATION ===" << endl;
    
    set<int> s;
    
    // Adding elements
    s.insert(1);
    s.insert(2);
    s.insert(2); // duplicate will be ignored
    s.insert(3);
    s.insert(4);
    s.emplace(5);
    
    cout << "Set elements (unique and sorted): ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    
    // Finding elements
    if (s.find(3) != s.end()) {
        cout << "Element 3 found in set" << endl;
    }
    
    // Count (always 0 or 1 for set)
    cout << "Count of 2: " << s.count(2) << endl;
    
    // Erase
    s.erase(2);
    cout << "After erasing 2: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
}

// ============================================
// MAIN FUNCTION
// ============================================
int main() {
    cout << "STL Learning Guide - Comprehensive STL Containers" << endl;
    cout << "=================================================" << endl;
    
    // Uncomment the functions you want to test:
    
    demonstratePairs();
    // demonstrateVectors();
    // demonstrateQueue();
    // demonstrateMultiset();
    // demonstrateSet();
    
    /*
     * To test individual concepts, comment out the functions above 
     * and uncomment only the one you want to study:
     * 
     * demonstratePairs();      // Learn about pairs
     * demonstrateVectors();    // Learn about vectors and all operations
     * demonstrateQueue();      // Learn about queue (FIFO)
     * demonstrateMultiset();   // Learn about multiset (sorted, allows duplicates)
     * demonstrateSet();        // Learn about set (sorted, unique elements)
     */
    
    return 0;
}

/*
 * KEY TAKEAWAYS:
 * 
 * 1. VECTORS:
 *    - Dynamic arrays with many operations
 *    - push_back() vs emplace_back() (emplace is faster)
 *    - erase() can remove single element or range
 *    - insert() can add elements at any position
 *    - Always check bounds when accessing elements
 * 
 * 2. QUEUE:
 *    - FIFO (First In, First Out) structure
 *    - Only front() and back() access allowed
 *    - No iterators available
 *    - push() to add, pop() to remove
 * 
 * 3. SET:
 *    - Automatically sorted
 *    - Only unique elements
 *    - Fast search, insert, delete (O(log n))
 *    - Use when you need sorted unique elements
 * 
 * 4. MULTISET:
 *    - Like set but allows duplicates
 *    - Automatically sorted
 *    - count() can return > 1
 *    - Use when you need sorted elements with duplicates
 * 
 * 5. BEST PRACTICES:
 *    - Use emplace() instead of push() when possible
 *    - Always check if container is empty before accessing
 *    - Use auto for iterator declarations
 *    - Choose the right container for your use case
 */