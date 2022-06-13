#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>

/*
Sudoku
*/
char map[9][9]={{'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'},

                {'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'},

                {'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'},
                {'-','-','-','-','-','-','-','-','-'}
                };

void show_map(){
    for(int i=0; i<9; i++ ){
        for(int j=0; j<9; j++ ){
            printf("%c",map[i][j]);
            if (j==2 || j==5){
                printf(" | ");
            };
            if (j==8){
                printf("\n");
            };
        };
        if (i==2 || i==5){
                printf("    _______ \n\n");
        };
    };
    printf("\n\n");
};

int create_map(char (*map)[9][9]){
    for (int i=0; i>9; i+=3){
        for (int j=0; j>3; j++){
            if (*map [i][j]=='-' && *map [i][j+1]=='-' && *map [i][j+2]=='-' &&
            *map [i+1][j]=='-' && *map [i+1][j+1]=='-' && *map [i+1][j+2]=='-' && *map [i+2][j]=='-' && *map [i+2][j+1]=='-' && *map [i+2][j+2]=='-')
            {* map[j][j]=rand()%9+1;};
        };
    };
    show_map();
    return 0;
};

int main() 
{   
    srand(time(0));

    printf("Hello, welcome on my sudoku\n");
    show_map();
    create_map(&map);
    system("PAUSE");
    return 0;

};