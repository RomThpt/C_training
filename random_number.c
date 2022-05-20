#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() 
{   
    const int MIN = 1;
    const int MAX = 100;
    srand(time(0));

    int answer = (rand()% MAX)+MIN ;
    int guess ;

    printf("Guess the number : \n");
try:
    scanf("%d",&guess);

    if (answer==guess){
        printf("GG\n");
        return 0;
    }
    else {
        if (guess>answer){
            printf("Too high\n");
            goto try;
        };
        if (guess<answer){
            printf("Too low\n");
            goto try;
        };
    };

    return 0;

};