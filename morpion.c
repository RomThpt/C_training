#include <stdio.h>
#include <windows.h>

char map[3][3]= {
            {'_','_','_'},
            {'_','_','_'},
            {'_','_','_'}
            };

void test(int *lign, int *column){
    printf("\n\t\t\t Which lign ? ");
    scanf("%d",&*lign);
    printf("\n\t\t\t Which column ? ");
    scanf("%d",&*column);
};

void game(char *player, int lign, int column)
{   
    printf("%s\n",map);
    if (map[lign][column]!='_')
    {
        printf("\nCase already taken\n");
        return ;
    }
    map[lign][column]=*player;

    printf("\n%c|%c|%c\n",map[0][0],map[0][1],map[0][2]);
    printf("%c|%c|%c\n",map[1][0],map[1][1],map[1][2]);
    printf("%c|%c|%c\n",map[2][0],map[2][1],map[2][2]);

    if (*player=='X')
    {*player='O';}
    else{*player='X';};

    printf("%s\n",map);
};

void verify_win(int *game_active){
    int win_x=0;
    int win_o=0;

    if (map[0][0]=='X' && map[0][1]=='X' && map[0][2]=='X' || map[1][0]=='X' && map[1][1]=='X'&& map[1][2]=='X'||
     map[2][0]=='X' && map[2][1]=='X'&& map[2][2]=='X'|| map[0][0]=='X' && map[1][1]=='X' && map[2][2]=='X' || map[0][2]=='X' && map[1][1]=='X'&& map[2][0]=='X'){
        win_x=3;
    };

    if (map[0][0]=='O' && map[0][1]=='O' && map[0][2]=='O' || map[1][0]=='O' && map[1][1]=='O'&& map[1][2]=='O'||
     map[2][0]=='O' && map[2][1]=='O'&& map[2][2]=='O'|| map[0][0]=='O' && map[1][1]=='O' && map[2][2]=='O' 
     || map[0][2]=='O' && map[1][1]=='O'&& map[2][0]=='O'){
        win_o=3;}

    if (win_x==3){
        printf("X win!!!");
        *game_active=1;
        return;
    }
    else if (win_o==3){
        printf("O win!!!");
        *game_active=1;
        return;
    }
    return;
};


int main() 
{   
    int lign, column, game_active = 0;
    char player;

    printf("\n\t\t\t Who start ? (\"X\" or \"O\") ");
    scanf(" %c",&player);
    
    while (game_active==0){
        test(&lign,&column);
        if (!(player=='X' || player=='O')){
        return 0;
        };
        if (!(0<=lign<3 || 0<=column<3)){
            printf("\n\t\t\tEnter a valid number\n");
            game_active=1;
            return 0;
        }
        game(&player, lign, column);
        verify_win(&game_active);
    } ;
    system("PAUSE");
    return 0;
};