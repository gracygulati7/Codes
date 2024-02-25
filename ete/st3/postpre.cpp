#include <iostream>

// Function to perform post increment on a complex number
void postIncrement(double& real, double& imag) {
    real++;
    imag++;
}

// Function to perform pre decrement on a complex number
void preDecrement(double& real, double& imag) {
    --real;
    --imag;
}

int main() {
    // Initialize complex number components
    double realPart = 5.0;
    double imagPart = 3.0;

    // Display the original complex number
    std::cout << "Original Complex Number: " << realPart << " + i" << imagPart << std::endl;

    // Perform post increment
    postIncrement(realPart, imagPart);
    std::cout << "After Post Increment: " << realPart << " + i" << imagPart << std::endl;

    // Perform pre decrement
    preDecrement(realPart, imagPart);
    std::cout << "After Pre Decrement: " << realPart << " + i" << imagPart << std::endl;

    return 0;
}
