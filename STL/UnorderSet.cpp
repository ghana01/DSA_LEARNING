#include <iostream>
#include <unordered_set>
using namespace std;



// Unordered Sets are containers that store unique elements in no particular order.
//  They use hash tables for implementation,
//  providing faster access than ordered sets.

// Performance Characteristics
// Average case complexity:
// Insertion: O(1)
// Deletion: O(1)
// Search: O(1)
// Worst case complexity (when hash collisions occur): O(n)


int main() {
    // Creating unordered_set
    unordered_set<int> uset;
    //unordered_set<int> uset;                    // Empty set
   // unordered_set<int> uset = {1, 2, 3, 4};    // Initialize with values
          // Copy constructor
    
    // Insertion
    uset.insert(10);
    uset.insert(5);
    uset.insert(15);
    uset.insert(20);
    uset.insert(5);  // Duplicate - won't be inserted
    

    // uset.insert(10); // Insert element
    // uset.emplace(20);// Construct and insert
    // uset.erase(10); // Remove by value
    // uset.erase(iterator); // Remove by iterator
    //  uset.clear(); // Remove all elements

    // auto it = uset.find(10); // Returns iterator to element
    // size_t count = uset.count(10); // Returns 1 if found, 0 if not
    // bool exists = uset.contains(10);// C++20: Check if element exists

    // Displaying elements
    cout << "Elements: ";
    for(const auto& elem : uset) {
        cout << elem << " ";
    }
    
    // Search
    if(uset.find(15) != uset.end())
        cout << "\nElement 15 found";
    
    return 0;
}