#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{   
    const int MIN = 1;
    const int MAX = 100;
    srand(time(0));

    int answer = (rand()% MAX)+MIN ;
    int guess;
    
try:
    printf("Guess the number : ");
    scanf("%d",&guess);
    if (guess<0 || guess>100){
        printf("Enter a number between 1 and 100 !\n");
        goto try;
    };
    if (answer==guess){
        printf("GG\n");
        return 0;
    }
    else if (guess>answer){
        printf("Too high\n");
        goto try;
        }
    else if (guess<answer){
        printf("Too low\n");
        goto try;
    };
    system("PAUSE");
    return 0;

};