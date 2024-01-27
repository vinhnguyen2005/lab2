#include <stdio.h>
#include <stdlib.h>
#include <math.h>\

#define ll long long // dat long long -> ll cho gon

// function tim uoc chung lon nhat
ll gcd(ll a, ll b) 
{
    // cong thuc tim uoc chung lon nhat la gcd(b, a%b) hoac co the dung oclip
    while(b!=0) 
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//function tim boi chung nho nhat
ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a, b); //ta lay hai so nhan voi nhau roi chia cho uoc chung lon nhat cua 2 so
}

int main() {
    int a, b;
    do {
        printf("Enter a and b (both >= 0): ");
        scanf("%d %d", &a, &b);

        if (a < 0 || b < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (a < 0 || b < 0);
    printf("The gratest common divisor between %d and %d is: %lld\n", a, b, gcd(a, b));
    printf("The least common multiple  between %d and %d is: %lld", a, b, lcm(a, b));

    return 0;
}