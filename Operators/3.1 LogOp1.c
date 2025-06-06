#include <stdio.h>
int main() {
    int a=4, b=5, c=10;
    if(a < 5 && a / 2)
    printf("logical AND Condition TRUE\n");
    else 
    printf("logical AND Condition FALSE\n");
    if(b >= 10 || b < 6)
    printf("logical OR Condition TRUE\n");
    else
    printf("logical OR Condition FALSE\n");
    if(!(c == 11))
    printf("NOT Condition TRUE\n");
    else 
    printf("NOT Condition FALSE\n");
    if(!(c != 11))
    printf("NOT Condition TRUE\n");
    else 
    printf("NOT Condition FALSE\n");
    if(a < 5 && a / 2 || b < 6)
    printf("Condition TRUE\n");
    else 
    printf("Condition FALSE\n");
}