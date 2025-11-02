#include <stdio.h>
int main() {
    int n, d1, d2, flag = 0;
    scanf("%d", &n);
    while (n > 9) {  
        d1 = n % 10; 
        n = n / 10;
        d2 = n % 10; 
        if (d1 < d2) { 
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Digits are in ascending order.");
    else
        printf("Digits are NOT in ascending order.");
    return 0;
}
