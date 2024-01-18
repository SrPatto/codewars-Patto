// Description:

// Implement a function that adds two numbers together and returns their sum in binary. The conversion can be done before, or after the addition.

// The binary number returned should be a string.

// Examples:(Input1, Input2 --> Output (explanation)))

// 1, 1 --> "10" (1 + 1 = 2 in decimal or 10 in binary)
// 5, 9 --> "1110" (5 + 9 = 14 in decimal or 1110 in binary)

//My solution
#include <cstdint>
#include <string>
#include <vector>

std::string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum = a + b;

    if (sum == 0) {
        return "0";
    }

    std::string binary;
    while (sum > 0) {
        int remainder = sum % 2;
        char tempB = remainder + '0';
        binary.insert(binary.begin(), tempB);
        sum /= 2;
    }

    return binary;
}