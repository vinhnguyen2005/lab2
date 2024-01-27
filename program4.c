#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *digitsarray(int n, int *size) {
    int temp = n;
    *size = 0;
    while (temp > 0) {
        temp /= 10;
        (*size)++;
    }

    // trả lại n ban đầu( nếu ko trả lại n sẽ = 0)
    temp = n;
    // tạo một mảng động để store digits của n
    int *arr = (int *)malloc(*size * sizeof(int));
    //tách n ra các digits rồi store những digits trên vào mảng vừa declare
    for (int i = *size - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp /= 10;
    }
    return arr;
}

int main() {
   int n, size;
    // dam bao nguoi dung nhap n la so duong
    do {
        printf("Enter a number (n >= 0): ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (n < 0);
    int* arr = digitsarray(n, &size);
    int max = -1e9 -1;
    // tìm max của mảng động chứa các digits của n
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum digits of %d is: %d", n, max);
    // Free dynamically allocated memory
    free(arr);

    return 0;
}
