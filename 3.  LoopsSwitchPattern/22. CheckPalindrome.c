#include <stdio.h>
int main() {
    int n, rev = 0, rem = 0, org;
    printf("Enter a number: ");
    scanf("%d", &n);
    org = n;
    printf("Reverse number is: ");
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("%d\n", rev);
    if(org == rev)
        printf("%d is a palindrome", org);
        else
        printf("%d is not a palindrome", org);
    return 0;
}