#include <stdio.h>
#include <ctype.h>

void convertion(char unit,char unitWanted,float temp){

    float finalTemp;

    if(unit=='C' && unitWanted=='F'){
        finalTemp = temp*9/5+32;
    };
    if(unit=='C' && unitWanted=='K'){
        finalTemp = temp+273.15;
    };
    if(unit=='F' && unitWanted=='C'){
        finalTemp = (temp-32)*5/9;
    };
    if(unit=='F' && unitWanted=='K'){
        finalTemp = (temp+459.67)*5/9;
    };
    if(unit=='K' && unitWanted=='C'){
        finalTemp = temp-273.15;
    };
    if(unit=='K' && unitWanted=='F'){
        finalTemp = temp*9/5-459.67;
    };
    printf("It will be %d %c", finalTemp,unitWanted);
};

int main(){

    char unit;
    char unitWanted;
    float temp;
    
    printf("Wich unit are you using ? \n");
    scanf("%c",&unit);

    unit = toupper(unit);

    printf("In wich units you want to convert? \n");

    scanf(" %c",&unitWanted);

    unitWanted = toupper(unitWanted);

    printf("How many ? \n");
    scanf("%f",&temp);

    convertion(unit,unitWanted,temp);
    system("PAUSE");
    return 0;
};

