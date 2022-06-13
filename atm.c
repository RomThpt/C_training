#include <stdio.h>
#include <stdlib.h>

/*
ATM
*/

void add_money(){
    char currentMoney[255];
    float wantedMoney;
    int restart;

    do{
        system("cls");
        FILE *bankAccount = fopen("bankAccount.txt","r+");
        if (bankAccount==NULL){
            exit(1);
        }
        fgets(currentMoney,255, bankAccount);
        printf("You have %s $", currentMoney);

        printf("How many money does you want to add : ");
        scanf("%lf",&wantedMoney);
        system("cls");
        float finalMoney=atof(currentMoney)+wantedMoney;
        printf("You have %lf $", finalMoney);
        fputs("finalMoney",bankAccount);
        fclose(bankAccount);
        printf("Add more ? (0=No or 1=Yes) ");
        scanf("%d", &restart);
    }while(restart);
    return;

};
void retire_money(){
    char currentMoney[255];
    float wantedMoney;
    int restart;

    do{
        system("cls");
        FILE *bankAccount = fopen("bankAccount.txt","r+");
        if (bankAccount==NULL){
            exit(1);
        }
        fgets(currentMoney,255, bankAccount);
        printf("You have %s $", currentMoney);

        printf("How many money does you want to add : ");
        scanf("%lf",&wantedMoney);
        system("cls");
        float finalMoney=atof(currentMoney)-wantedMoney;
        printf("You have %lf $", finalMoney);
        fputs("finalMoney",bankAccount);
        fclose(bankAccount);
        printf("Retire more ? (0=No or 1=Yes) ");
        scanf("%d", &restart);
    }while(restart);
    return;
};

int main() 
{   
    int choice;
    printf("Bienvenue, que voulez-vous faire?\n");
    printf("1.Add money \t 2.Retire \t\t 3.Exit\n\n");
    printf("Choose (1 or 2 or 3) : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            add_money();
            break;
        case 2:
            retire_money();
            break;
        case 3:
            exit(0);
            break;

    };
    return 0;

};