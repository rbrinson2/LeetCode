#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;

    int rev = 0;
    int num = x;

    while (x > 0){
        printf("x: %d, ", x);

        rev *= 10;
        rev = rev + x % 10;
        x /= 10;

        printf("rev: %d\n", rev);
    }

    if (rev != num) return false;

    return true;    
}
int main(void)
{
    int r = 0;
    int x = 0;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("\n");

    printf("%s\n", isPalindrome(x) ? "true" : "false");


    return EXIT_SUCCESS;
}
