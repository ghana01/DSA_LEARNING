#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a map
    map<string, int> myMap;                    // Empty map
    // map<string, int> myMap = {                 // Initialize with values
    //     {"one", 1},
    //     {"two", 2}
    // };
    map<string, int> myMap2(myMap);            // Copy constructor
    
    // Insertion methods
    myMap["apple"] = 1;                    // Using operator[]
    myMap.insert({"banana", 2});           // Using insert()
    myMap.insert(make_pair("orange", 3));  // Using make_pair
    myMap["key"] = 4;                      // Direct insertion/update
    myMap.insert({"kiwi", 5});              // Insert pair
    myMap.insert(make_pair("mango", 6));     // Using make_pair
    myMap.emplace("peach", 7);               // Construct in-place

    // Insert with check
    auto result = myMap.insert({"grape", 8});
    if(result.second) {
        cout << "Insertion successful";
    }
    
    // Accessing elements
    cout << "apple: " << myMap["apple"] << endl;
    int value = myMap["key"];                  // Using operator[]
    auto it = myMap.find("key");               // Returns iterator
    bool exists = myMap.count("key");          // Returns 1 if found

    // Safe access
    // if(myMap.contains("key")) {                // C++20
    //     // Key exists
    // }

    // Using at() with exception handling
    try {
        int value = myMap.at("key");
    } catch(out_of_range& e) {
        cout << "Key not found";
    }
    
    // Iterating through map
    for(const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Erasing elements
   // myMap.erase("key");                        // Remove by key
   // myMap.erase(iterator);                     // Remove by iterator
  //  myMap.clear();                             // Remove all elements


    //Important Methods
    // size_t size = myMap.size();                // Number of elements
    // bool empty = myMap.empty();                // Check if empty
    // myMap.swap(otherMap);                      // Swap contents
    
    return 0;
}