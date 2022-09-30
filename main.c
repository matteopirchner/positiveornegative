#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("-----------------------------------\n");
    printf("Is the number positive or negative?\n");
    printf("Made by Matteo Pirchner-Gratz.\n");
    printf("-----------------------------------\n\n");
    printf("Please type in your number: ");
    scanf("%i", &num);

    if(num >= 0) {
        printf("The number is positive.\n\n");
    }
    else{
        printf("The number is negative.\n\n");
    }
    return 0;
}
