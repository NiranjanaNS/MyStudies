#include <stdio.h>
int main() {
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    if(mark >= 40)
    printf("You passed the exam");
    else
    printf("Failed");
    return 0;
}