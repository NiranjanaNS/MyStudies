#include <stdio.h>
int main(){
    float hour;
    printf("Enter an hour: ");
    scanf("%f", &hour);
    if(hour >= 5 && hour < 12){
        printf("Good morning");}
    else if(hour >= 12 && hour < 17){
        printf("Good afternoon");}
    else if(hour >= 17 && hour < 21){
        printf("Good evening");}
    else if(hour >= 21 && hour <= 24 && hour < 5){
        printf("Good night");}
    else{
        printf("ERROR");} 
        return 0;
}