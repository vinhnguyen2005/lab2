#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Sử dụng 1 function để check số nguyên tố
int prime(int n) {
    for (size_t i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    // dam bao nguoi dung nhap n la so duong
    do {
        printf("Enter a number (n >= 0): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (n < 0);
    
    // Tạo một mảng động chứa các số nguyên tố
    int *prime_numbers = (int *)malloc(n * sizeof(int));

    // Store các số nguyên tố vào trong mảng
    int dem = 0;
    for (size_t i = 2; i <= n; i++) {
        if (prime(i)) {
            prime_numbers[dem++] = i;
        }
    }

    // Print các số nguyên tố
    printf("Prime numbers from 2 to %d are: ", n);
    for (size_t i = 0; i < dem; i++) {
        printf("%d ", prime_numbers[i]);
    }

    // Free dynamically allocated memory
    free(prime_numbers);

    return 0;
}
