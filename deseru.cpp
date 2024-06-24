#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> sortedHoldTimeDistribution1 = {1, 2, 3, 4, 5};
    std::vector<int> sortedHoldTimeDistribution2 = {6, 7, 8, 9, 10};

    std::string string1;
    std::string string2;

    for (int i : sortedHoldTimeDistribution1) {
        string1 += std::to_string(i) + ", ";
    }

    for (int i : sortedHoldTimeDistribution2) {
        string2 += std::to_string(i) + ", ";
    }

    // Remove the trailing comma and space
    string1 = string1.substr(0, string1.length() - 2);
    string2 = string2.substr(0, string2.length() - 2);

    std::cout << string1 << std::endl;  // Output: "1, 2, 3, 4, 5"
    std::cout << string2 << std::endl;  // Output: "6, 7, 8, 9, 10"

    return 0;
}
