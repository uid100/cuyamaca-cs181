#include <cassert>
#include <iostream>

int square(int n) {
    return n * n;
}

int main() {
    // Unit tests
    assert(square(2) == 4);
    assert(square(5) == 25);
    assert(square(-3) == 9);

    std::cout << "All tests passed!\n";

    return 0;
}