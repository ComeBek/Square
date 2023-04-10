#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_square(int columns, int rows);

int main(int ac, char **av){
     if(ac != 3){
    return 0;
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
   
    my_square(x, y);
}


int my_square(int columns, int rows){
    int i, j;

    for(i = 0; i < rows; i++){
        for(j = 0; j < columns; j++){
            if(i == 0 || i == rows - 1){
                if(j > 0 && j < columns - 1){
                    printf("-");
                    continue;
                }
                printf("o");
            }
            else if(j == 0 || j == columns - 1){
                printf("|");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}