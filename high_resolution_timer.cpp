#include <iostream>
#include <chrono>

void dummy_function() {
    volatile int x = 0;
    for (int i = 0; i < 1000; ++i) {
        x += i;
    }
}

int main() {
    using namespace std::chrono;

    auto start = high_resolution_clock::now();
    dummy_function();
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start).count();

    std::cout << "dummy_function took " << duration << " nanoseconds.\n";
    return 0;
}
