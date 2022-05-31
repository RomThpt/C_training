#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

typedef struct
{
    char fisrt_name[30];
    char last_name[30];
    float grades;
    unsigned int classes;

}Student;

int first_page(){
    char enter;
    int width = 120;
    char title[] = "************** Student Management **************";
    char description[] = " Saint Francois Notre Dame ";
    char key_wait[] = "press any key to Enter";
    int length_title= sizeof(title) - 1; 
    int length_description = sizeof(description) - 1;
    int length_key_wait= sizeof(key_wait) - 1;
    int pad_title = (length_title >= width) ? 0 : (width - length_title) / 2;
    int pad_description = (length_description >= width) ? 0 : (width - length_description) / 2;
    int pad_key_wait = (length_key_wait >= width) ? 0 : (width - length_key_wait) / 2;


    printf("%*.*s%s\n", pad_title, pad_title, " ", title);
    printf("%*.*s%s\n", pad_description, pad_description, " ", description);
    printf("\t\t\t\t========================================================");
    printf("\n");
    printf("%*.*s%s", pad_key_wait, pad_key_wait, " ", key_wait);
    scanf("%c", &enter);

    return (sizeof(enter)!=0) ? 0 : 1;

};

int second_page(){
    int option;
    printf("\n\n\t\t\t\t1. Add Student");
    printf("\n\n\t\t\t\t2. Modify Student");
    printf("\n\n\t\t\t\t3. Show All Student");
    printf("\n\n\t\t\t\t4. Individual View");
    printf("\n\n\t\t\t\t5. Remove Student");
    printf("\n\n\t\t\t\t6. Change Password");
    printf("\n\n\t\t\t\t7. Logout\n\t");
    printchar('*',64);
    printf("\n\n\t\t\t\tEnter Your Option :--> ");
    scanf("%d",&option);
};

int main()
{   
    int option;
    SetConsoleTitle("Student Management System | SFND");
    first_page();
    system("cls");

    second_page();
    system("PAUSE");
    return(0);
};
