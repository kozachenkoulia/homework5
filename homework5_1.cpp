#include <iostream>
int main() {
    int signedVar = -2;
    signed long long unsignedVar = -4294967294;

    signed long long result = signedVar + unsignedVar;

    std::cout << "Result of signedVar + max unsignedVar: " << result << std::endl;
    return 0;
}
