#include <iostream>
#include <vector>
#include <array>

int main() {
    int things[] = {1,2,3,4,5};
    int elements[10] {1,2,3,4,5};
    int all_zeroes[100] {1};
    std::array<int,100> stdarray {0};
    stdarray.fill(42);

    std::vector<int> ents(100);
    ents.push_back(100);

    std::cout << ents.at(34) << std::endl;

    return 0;
}
