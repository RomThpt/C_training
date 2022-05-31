#include <stdio.h>
#include <string.h>

int main(){

    char calcul_type ;
    double first_number ;
    double second_number ;
    double result ;

    printf("Write your calcul\n");
    scanf(" %c", &calcul_type);

    printf("The first number you wanna use : ");
    scanf(" %lf", &first_number);

    printf("The second number you wanna use : ");
    scanf(" %lf", &second_number);

    printf("\n");

    switch(calcul_type){
        case '*':
            result = first_number * second_number;
            break;
        case '/':
            result = first_number / second_number;
            break;
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
    };
    printf("The result of the opperation will be %lf \n", result);
    system("PAUSE");
    return 0;
};

