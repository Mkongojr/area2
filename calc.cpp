#include <iostream>
#include <cmath> // For M_PI and power function
using namespace std;

// Function to calculate the area of a circle
double calculateCircleArea(double radius)
{
    return M_PI * radius * radius; // Area of circle = π * r^2
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height)
{
    return 0.5 * base * height; // Area of triangle = 0.5 * base * height
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width)
{
    return length * width; // Area of rectangle = length * width
}

// Function to calculate the area of a square
double calculateSquareArea(double side)
{
    return side * side; // Area of square = side^2
}

// Function to calculate the area of a parallelogram
double calculateParallelogramArea(double base, double height)
{
    return base * height; // Area of parallelogram = base * height
}

int main()
{
    int choice;
    double radius, base, height, length, width, side;

    cout << "Select the shape to calculate the area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Square" << endl;
    cout << "5. Parallelogram" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice)
    {
    case 1: // Circle
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "The area of the circle is: " << calculateCircleArea(radius) << endl;
        break;
    case 2: // Triangle
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
        break;
    case 3: // Rectangle
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
        break;
    case 4: // Square
        cout << "Enter the side of the square: ";
        cin >> side;
        cout << "The area of the square is: " << calculateSquareArea(side) << endl;
        break;
    case 5: // Parallelogram
        cout << "Enter the base of the parallelogram: ";
        cin >> base;
        cout << "Enter the height of the parallelogram: ";
        cin >> height;
        cout << "The area of the parallelogram is: " << calculateParallelogramArea(base, height) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
