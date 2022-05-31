#include <stdio.h>
#include <windows.h>

int main() 
{
    int h,m,s;
    int d=1000;

    printf("Set time: \n");
    scanf("%d %d %d",&h,&m,&s);

    if (h>24 || m>60 || s>60)
    {
        printf("Error!!");
        return 0;
    }
    while(1)
    { 
        s+=1;
        if (s>=60)
        {   
            s=0;
            m+=1;
        };
        if (m>=60)
        {   
            m=0;
            h+=1;
        };
        if (h>=24)
        {
            h=0;
        };
        printf("\n\t\t\t %02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls");
    };
    return 0;
    system("PAUSE");
};