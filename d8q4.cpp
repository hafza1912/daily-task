#include <stdio.h>
int main() {
    int n, digit;
    int count = 0, sum = 0, product = 1;
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
        sum = 0;
        product = 0;
    } else {
        while (n > 0) {
            digit = n % 10;        
            count++;               
            sum += digit;          
            product *= digit;      
            n = n / 10;            
        }
    }
    printf("Count:%d\n", count);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}
