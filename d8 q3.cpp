#include <stdio.h>
int main() {
    int n, i;
    int fact = 1; 
    scanf("%d", &n);
    if (n < 0)
        printf("Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("%d", fact);
    }
    return 0;
}
