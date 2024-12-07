#include <stdio.h>

int main() {
    double radius = 5.0;  // You can change this value
    double length = 10.0; // You can change this value
    double area = radius * radius * 3.14159;
    double volume = area * length;
    printf("Area of the cylinder: %.2f\n", area);
    printf("Volume of the cylinder: %.2f\n", volume);
    return 0;
}
