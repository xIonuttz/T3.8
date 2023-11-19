#include <iostream>
#include <cmath>
using namespace std;
// Function to solve a quadratic equation
void solveQuadraticEquation(double a, double b, double c) {
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is non-negative
    if (discriminant >= 0) {
        // Calculate the two real solutions
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

        cout << "Real solutions:\n";
        cout << "Root 1: " << root1 << "\n";
        cout << "Root 2: " << root2 << "\n";
    }
    else {
        // No real solutions
        cout << "No real solutions.\n";
    }
}

int main() {
    // Example usage
    double a, b, c;

    // Get coefficients from the user
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

   cout << "Enter coefficient c: ";
    cin >> c;

    // Solve the quadratic equation
    solveQuadraticEquation(a, b, c);

    return 0;
}
