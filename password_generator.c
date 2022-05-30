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
    char specialChars[25]={'&','"','\'','(','-','_',')','!',':',';',',','?','\\','*'};
    int letterWanted, capWanted, numberWanted, specialWanted;
    char finalPassword[] = "                                                                                                   "; //string for final password

    printf("How many caracter in your password : ");
    scanf("%d",&letterWanted);
    printf("Does you need caps ? (0=OFF or 1=ON) : ");
    scanf("%d",&capWanted);
    printf("Does you need numbers ? (0=OFF or 1=ON) : ");
    scanf("%d",&numberWanted);
    printf("Does you need special character ? (0=OFF or 1=ON) : ");
    scanf("%d",&specialWanted);


    for (int i=0;i<letterWanted;i++){
            if (capWanted == 1 && numberWanted==0 && specialWanted==0){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==1 && capWanted==0 && specialWanted==0){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 26+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==1 && capWanted ==1 && specialWanted==0){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else if (rand() % 3 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 10+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==0 && capWanted ==1 && specialWanted==1){
                if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else if (rand() % 6 + 1 == 1){
                    finalPassword[i]=specialChars[rand() % 10+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==1 && capWanted ==0 && specialWanted==1){
                if (rand() % 3 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 10+1];
                }
                else if (rand() % 6 + 1 == 1){
                    finalPassword[i]=specialChars[rand() % 10+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(numberWanted==1 && capWanted ==1 && specialWanted==1){
                if (rand() % 3 + 1 == 1){
                    finalPassword[i]=numbers[rand() % 10+1];
                }
                else if (rand() % 4 + 1 == 1){
                    finalPassword[i]=capsLetters[rand() % 26+1];
                }
                else if (rand() % 6 + 1 == 1){
                    finalPassword[i]=specialChars[rand() % 10+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else if(capWanted == 0 && numberWanted==0 && specialWanted==1){
                if (rand() % 6 + 1 == 1){
                    finalPassword[i]=specialChars[rand() % 26+1];
                }
                else{
                    finalPassword[i]=letters[rand() % 26+1];
                };
            }
            else{
                finalPassword[i]=letters[rand() % 26+1];
            };
    };

    printf("%s\n",finalPassword);
    system("PAUSE");
    return 0;

};