#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec = {1, 2, 3};
    cout << "Initial vector: ";
    for (int i : vec) cout << i << " ";
    cout << endl;

    // I. Inserting an element
    vec.push_back(4);  // Insert at the end
    cout << "After push_back(4): ";
    for (int i : vec) cout << i << " ";
    cout << endl;

    vec.insert(vec.begin(), 0);  // Insert at the beginning
    cout << "After insert at the beginning (0): ";
    for (int i : vec) cout << i << " ";
    cout << endl;

    // II. Removing an element
    vec.pop_back();  // Remove the last element
    cout << "After pop_back(): ";
    for (int i : vec) cout << i << " ";
    cout << endl;

    vec.erase(vec.begin() + 1);  // Remove element at position 1
    cout << "After erase at position 1: ";
    for (int i : vec) cout << i << " ";
    cout << endl;

    // III. Accessing the first and last elements
    int firstElement = vec.front();
    int lastElement = vec.back();
    cout << "First element: " << firstElement << ", Last element: " << lastElement << endl;

    // IV. Clearing the vector
    vec.clear();
    cout << "After clear(), vector size: " << vec.size() << endl;

    // V. Determining the current size
    vec.push_back(5);
    vec.push_back(10);
    cout << "After adding 5 and 10, vector contents: ";
    for (int i : vec) cout << i << " ";
    cout << endl;
    cout << "Current size of the vector: " << vec.size() << endl;

    return 0;
}