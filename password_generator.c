#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/*
Pass word generator
*/


int main() 
{   
    srand(time(0));

    char letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char capsLetters[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int letterWanted,cap,numberWanted;
    char finalPassword[] = "                                                                                                   ";

    printf("How many caracter in your password : ");
    scanf("%d",&letterWanted);
    printf("Does you need caps ? (0=OFF or 1=ON) : ");
    scanf("%d",&cap);
    printf("Does you need numbers ? (0=OFF or 1=ON) : ");
    scanf("%d",&numberWanted);

    for (int i=0;i<letterWanted;i++){
            finalPassword[i]=letters[rand() % 26+1];
            if (cap == 1 && numberWanted==0){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if (numberWanted==1 && cap==0){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 26+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==1 && cap ==1){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else if (rand() % 3 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 10+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            };
    };
    printf("%s\n",finalPassword);
    return 0;

};