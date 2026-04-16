#include "utility.h"
#include "my_math.h"

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        std::println("Please provide 2 numbers to sum");
        return 0;
    }

    Utility::PrintCurrentWorkingDirectory();
    std::println("Sum of {} + {} = {}", argv[1], argv[2], MyMath::Sum(atoi(argv[1]), atoi(argv[2])));
    return 0;
}
