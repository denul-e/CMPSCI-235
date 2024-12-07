#include <stdio.h>

int main() {
    double subtotal = 50.0;  // You can change this value
    double tiprate = 0.15;   // You can change this value
    double tip = subtotal * tiprate;
    double total = subtotal + tip;
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tip: %.2f\n", tip);
    printf("Total: %.2f\n", total);
    return 0;
}
