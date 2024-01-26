#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factorial(int n)
{
    int fac = 1;
    for (size_t i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
    
}

int main() {
    int n;
    do {
        printf("Enter a number (n >= 0): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (n < 0);
    printf("Factorial of %d is: %lld\n", n, factorial(n));

    return 0;
}
