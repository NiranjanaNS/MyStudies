#include <stdio.h>
int main() {
    char name[10];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("My name is %s", name);
    return 0;
}