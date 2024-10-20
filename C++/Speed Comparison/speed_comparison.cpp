// WAP that counts to '1,000,000,000'

#include <iostream>
#include <chrono>

int main()
{
    using std::cout;
    using std::endl;
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::milliseconds;

    // Start time
    auto start = high_resolution_clock::now();

    size_t n = 0;
    while (n < 1'000'000'000)
        n++;

    // End time
    auto end = high_resolution_clock::now();

    // Calculate time in nanoseconds and then cast to milliseconds
    auto nanoseconds = end - start;
    auto ms = duration_cast<milliseconds>(nanoseconds);

    cout << n << endl;
    cout << "Time taken: " << ms.count() << "ms" << endl;
    
    return 0;
}