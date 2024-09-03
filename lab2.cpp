// Tishyra Wilson
#include <iostream>
int main() {
    int num1, num2, num3, result;

    std::cout << "Give me a number: ";
    std::cin >> num1;
    
    std::cout << "Give me another number: ";
    std::cin >> num2;
    
    std::cout << "Give me one more number: ";
    std::cin >> num3;

    result = num1 * num2 * num3;

    std::cout << "Result: " << result << std::endl;

    return 0;
}

