#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age <= 12 && age >= 0)
    printf("CHILD");
    else if(age <= 19)
    printf("TEEN");
    else
    printf("ADULT");
    return 0;
}