#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    printf("You are eligible to VOTE");
    else
    printf("You are NOT eligible to VOTE");
    return 0;
}