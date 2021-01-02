#include <stdio.h>
#include <math.h>
int main() {
    float pay[8] = { 0 };
    int i = 8;
    float tay = 1;
    float x;
    int shot = 1;
    printf("Input X: ");
    scanf_s("%f", &x);
    for (int k = 1; k < i; k++) {
        tay *= (cos(x / powf(2, k)));
        pay[shot] = tay;
        shot++;
    }
    for (int i = 0; i < 8; i++) {
        printf("%f ", pay[i]);
    }
    return 0;
}
