#include "utility.h"
#include "my_math.h"

int main(int argc, char const *argv[])
{
    Utility::PrintCurrentWorkingDirectory();
    std::println("Sum of 2 + 3 = {}", MyMath::Sum(2, 3));
    return 0;
}
