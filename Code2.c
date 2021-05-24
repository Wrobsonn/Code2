#include <stdio.h>
#include "libkwadrat.h"
#include "libszescian.h"

/*(void kwadrat(float a){
    printf("Pole kwadratu to: %5.2f",a*a);
}

void szescian(float b){
    printf("Pole szescianu to: %5.2f",b*b*b);
}*/

int main(int argc, char *argv[]) {
    float a,b;
    printf("Podaj dlugosc boku kwadratu: ");
    scanf("%f",&a);
    printf("Podaj dlugosc boku szescianu: ");
    scanf("%f",&b);
    kwadrat(a);
    printf("\n");
    szescian(b);
    printf("\n");
    return 0;
}
