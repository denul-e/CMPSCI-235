#include <iostream>
using namespace std;

int main() {
    double radius = 5.0; // You can change this value
    double length = 10.0; // You can change this value
    double area = radius * radius * 3.14159;
    double volume = area * length;

    cout << "Radius: " << radius << endl;
    cout << "Length: " << length << endl;
    cout << "Area: " << area << endl;
    cout << "Volume: " << volume << endl;
    return 0;
}
