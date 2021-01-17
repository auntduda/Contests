#include <stdio.h>
#include <string.h>

int main (){

 unsigned char cinema[200][200];
 int m, v, x, y;

    memset (cinema, 0, sizeof(cinema));
    scanf ("%*d %d", &v);
    while (v--){
        scanf ("%d %d", &x, &y);
        for (int i = -1; i < 2; i++)
            for (int j = -1; j < 2; j++)
                cinema[x+i][y+j] = 1;
    }
    scanf ("%d", &m);
    while (m--){
        scanf ("%d %d", &x, &y);
        if (cinema[x][y] == 0){
            printf ("Sim\n");
            for (int i = -1; i < 2; i++)
                for (int j = -1; j < 2; j++)
                    cinema[x+i][y+j] = 1;
        }
        else
            printf ("Nao\n");
    }

 return 0;
}