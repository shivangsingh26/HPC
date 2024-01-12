#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate a sequence of random integers
    std::vector<int> sequence;
    std::srand(std::time(0));
    for (int i = 0; i < 1000000; ++i) {
        sequence.push_back(std::rand() % 100000000);
    }

    // Sort the sequence
    std::sort(sequence.begin(), sequence.end());

    // Verify the sorting
    bool sorted = std::is_sorted(sequence.begin(), sequence.end());
    std::cout << (sorted ? "OK!" : "Error!") << std::endl;

    return 0;
}
