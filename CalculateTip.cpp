#include <iostream>
using namespace std;

int main() {
    double subtotal = 50.0; // You can change this value
    double tiprate = 0.15;  // 15% tip
    double tip = subtotal * tiprate;
    double total = subtotal + tip;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;
    return 0;
}
