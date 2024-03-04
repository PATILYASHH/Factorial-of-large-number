#include <stdio.h>

#define MAX_DIGITS 5000

void multiply(int result[], int num, int *size) {
    int carry = 0;
    for (int i = 0; i < *size; i++) {
        int product = result[i] * num + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        result[*size] = carry % 10;
        carry /= 10;
        (*size)++;
    }
}

void factorial(int n) {
    int result[MAX_DIGITS] = {0};
    result[0] = 1;
    int size = 1;

    for (int i = 2; i <= n; i++) {
        multiply(result, i, &size);
    }

    printf("Factorial of %d is: ", n);
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    factorial(number);
    return 0;
}