#include <stdio.h>

float Area(float length, float width) {
    return length * width;
}

float Perimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float l = 13.5;
    float w = 23.5;
    float a = Area(l, w);
    float p = Perimeter(l, w);

    printf("The area is: %.2f\n", a);
    printf("The perimeter is: %.2f\n", p);
    return 0;
}
