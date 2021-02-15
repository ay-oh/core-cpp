#include <array>
#include <iostream>

int main()
{
    std::array<int, 5> arr;

    // Assign values
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    // Print array using iterators
    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        std::cout << "*iter: " << *iter << "\n";
    }

    // Use element access functions
    std::cout << "arr.at(3): " << arr.at(3) << "\n";
    std::cout << "arr.front(): " << arr.front() << "\n";
    std::cout << "arr.back(): " << arr.back() << "\n";

    int* ptr_data = arr.data();
    std::cout << "ptr_data[3]: " << ptr_data[3] << "\n";

    // Get capacity
    std::cout << "arr.size(): " << arr.size() << "\n";

    // Fill specific value
    arr.fill(30);
    std::cout << "arr.size(): " << arr.size() << "\n";

    // Print array elements
    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "]: " << arr[i] << "\n";
    }
}
