
#include <stdio.h>

// Fonksiyon prototipleri
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    int choice;

    printf("Hesap Makinesi\n");
    printf("1. Toplama\n");
    printf("2. cikarma\n");
    printf("3. carpma\n");
    printf("4. Bolme\n");
    printf("Seciminizi yapin (1/2/3/4): ");
    scanf("%d", &choice);

    printf("ilk sayiyi girin: ");
    scanf("%f", &num1);
    printf("ikinci sayiyi girin: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            else
                printf("sifira bolme hatasi\n");
            break;
        default:
            printf("gecersiz secim!\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
