#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>

/*
Pass word saver
*/
void add_password_page(){
    char newPassword[100];
    int restart=1;

    while(restart){
        FILE *pF = fopen("password.txt", "a");
        system("cls");
        printf("Hey tell me your new password : ");
        scanf("%s", &newPassword);
        fprintf(pF,"%s\n",newPassword);
        fclose(pF);
        printf("Add a new one ? (0=No or 1=Yes) ");
        scanf("%d", &restart);
    };
    first_page();
    return;
};

void list_password_page(){
    int restart=1;

    while(restart){

        FILE *pF = fopen("password.txt", "r");
        char buffer[255];

        system("cls");
        while(fgets(buffer,255,pF)!=NULL){
            printf("%s",buffer);
        };

        fclose(pF);

        printf("\nUpdate ? (0=No or 1=Yes) ");
        scanf("%d", &restart);
    };
    first_page();
    return;
};

int first_page(){
    int choice=0;
    system("cls");
    printf("You're connected... \n\n");
    printf("1.Add a password \t 2.My list of password \t\t 3.Exit\n\n");
    printf("Choose (1 or 2 or 3) : ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            add_password_page();
        case 2:
            list_password_page();
        case 3:
            exit(0);
    }

}

int main() 
{   
    char password[]="theMoonIsBeatifulTonight",passInputed[100];
    printf("Hello \n");
    printf("What is your account password : ");
    scanf("%s",&passInputed);
    if (strcmp(password,passInputed)==0){
        printf("Hey");
        first_page();
    }
    return 0;

};