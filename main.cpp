#include <iostream>

// Ensure that the latest version of C++ is used.
auto testLatestVersion(void) -> void
{
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}

auto main(void) -> int
{
    testLatestVersion();
    return EXIT_SUCCESS;
}
