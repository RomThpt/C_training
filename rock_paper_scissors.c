#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void test_computer(char *pc_choice,char choices[]){
    srand(time(0));
try:
    *pc_choice=choices[rand() % 3+1];

    if (*pc_choice!='s' && *pc_choice != 'r' && *pc_choice != 'p'){
        goto try;
    }
    else{
    return;
    };
};

int main() 
{   
    char input[10],pc_choice,choices[3]={'r','p','s'};

try:
    test_computer(&pc_choice,choices);

    printf("Rock, paper or scissors :\n");
    fgets(input,10,stdin);

    printf("L'ordi a joue : %c \n",pc_choice);

    if (input[0] == pc_choice){
        printf("Egalite!\n");
        goto try;
    }
    else if (input[0] =='r' && pc_choice == 's' || input[0] =='p' && pc_choice == 'r' || input[0] =='s' && pc_choice == 'p'){
        printf("You win\n");
        return 0;
    }
    else if (input[0] =='s' && pc_choice == 'r' || input[0] =='r' && pc_choice == 'p' || input[0] =='p' && pc_choice == 's'){
        printf("You lose!\n");
        return 0;
    }
    system("PAUSE");
    return 0;

};