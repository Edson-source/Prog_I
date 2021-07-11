/*#include <ncurses.h>*//* precisa no linux */
/*#include <term.h>*//* precisa dessa também no linux */
#include <unistd.h>
#include <stdio.h>
#include <windows.h>/* precisa dessa biblioteca no windows*/
/* use essa gotoxy aqui para o linux */
/*
inline void gotoxy(int x1, int y1){
  putp(tparm(cursor_address, y1, x1));
}
*/
void gotoxy(int xx, int yy){/* use essa gotoxy aqui para o windows */
    COORD  c;
    c.X = xx;
    c.Y = yy;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);/*posiciona o cursor nas coordenadas*/
}
int x=1,y=1;
int ant_x=1,ant_y=2;
void DesenharJogador(char matriz[20][20]){             /*x= linhas da matriz  y= colunas da matriz */
    if(matriz[x][y]!= ' ' && matriz[x][y]!= 'S'){ /* se não for um caminho                    */
        x = ant_x;                                /* volta para a posição onde estava         */
        y = ant_y;
    }
    else{
        matriz[    x][    y] = 'O';
        matriz[ant_x][ant_y] = ' ';
    }
}
void mapa(char matriz[20][20]){
    int i,n;
    /* como você está usando Linux não vai poder usar esse gotoxy     */
    gotoxy(0,0);                     /* com esse a tela não pisca     */
    /*system("cls");*//*clear();*/   /* com esse a tela fica piscando */
    for(i=0;i<20;i++){
        for(n=0;n<20;n++){
            if(matriz[i][n]=='|')printf("%c",219);
            else        printf("%c",matriz[i][n]);
        }
        printf("\n");
    }
}
int main(){
    char matriz[20][20]={{'|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|'},
                         {'|',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ','|'},
                         {'|','|','|','|','|','|','|','|',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ','|'},
                         {'|',' ',' ',' ',' ',' ','|',' ',' ','|','|','|',' ','|',' ',' ',' ','|',' ','|'},
                         {'|',' ','|',' ','|',' ','|',' ','|','|','|','|',' ','|',' ',' ','|','|',' ','|'},
                         {'|',' ','|',' ','|',' ',' ',' ',' ',' ',' ','|',' ','|',' ',' ','|','|',' ','|'},
                         {'|',' ','|','|','|','|','|','|','|','|',' ','|',' ','|',' ',' ',' ','|',' ','|'},
                         {'|',' ','|',' ',' ',' ',' ',' ',' ','|','|','|',' ','|',' ',' ',' ','|',' ','|'},
                         {'|',' ',' ',' ','|',' ','|',' ',' ','|',' ',' ',' ','|','|',' ','|',' ',' ','|'},
                         {'|','|','|','|','|',' ','|','|',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|','|'},
                         {'|','|',' ',' ',' ',' ','|','|',' ','|','S',' ',' ','|',' ',' ',' ','|','|','|'},
                         {'|','|',' ','|','|',' ','|','|',' ','|','|','|',' ',' ','|','|',' ','|',' ','|'},
                         {'|','|','|','|','|',' ','|','|',' ',' ',' ','|',' ',' ','|',' ',' ','|',' ','|'},
                         {'|','|',' ',' ',' ',' ',' ',' ','|','|',' ','|',' ','|','|',' ','|','|',' ','|'},
                         {'|','|',' ','|','|','|',' ','|','|','|',' ','|',' ','|',' ',' ','|','|',' ','|'},
                         {'|','|',' ',' ',' ','|',' ','|','|','|',' ','|','|','|',' ','|','|','|',' ','|'},
                         {'|','|',' ','|','|','|',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|','|',' ','|'},
                         {'|',' ',' ','|','|','|','|','|','|','|',' ','|',' ','|','|',' ',' ',' ',' ','|'},
                         {'|',' ','|','|','|','|','|','|','|','|',' ','|',' ','|','|','|','|','|',' ','|'},
                         {'|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|','|'}};
    int j,i,tecla;
    do{
        tecla = 0;
        mapa(matriz);
        if(kbhit())tecla = getch();
        DesenharJogador(matriz);
        ant_x=x;
        ant_y=y;
        switch(tecla){
        case 80:/* seta para Baixo     s é 115 */
            x++;
            break;
        case 72:/* seta para Cima      w é 119 */
            x--;
            break;
        case 77:/* seta para Direita   d é 100 */
            y++;
            break;
        case 75:/* seta para Esquerda  a é 97  */
            y--;
            break;
        }
    }while(tecla != 27 && matriz[x][y] != 'S');/* S é A Saída */
    if(matriz[x][y] == 'S'){
        DesenharJogador(matriz);
        mapa(matriz);
        printf("\n\n     Achou A Saida , , , !\n\n" );
    }
    return 0;
}
