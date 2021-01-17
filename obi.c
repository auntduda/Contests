#include <stdio.h>
#include <string.h>

int ilhas [1111][1111], m, n, s;

int macaco_treinado (int pos){

    int menor = 1000, temp;

    if (ilhas [pos][s] != 0)
        return ilhas [pos][s];
    for (int i = 1; i < n; i++){
        if (ilhas [pos][i] != 0){
            ilhas [i][pos] = 0;
            temp = macaco_treinado (i) + ilhas [pos][i];
            ilhas [i][pos] = ilhas [pos][i];
            if (menor > temp)
                menor = temp;
        }
    }
    return menor;
}

int main (){

    scanf("%d%d", &n, &m);
    memset (ilhas, 0, 4*n);
    for(int i = 1; i <= m; i++){
        int x,y;
        scanf("%d%d", &x,&y);
        scanf("%d", &ilhas [x][y]);
        ilhas [y][x] = ilhas [x][y];
    }
    scanf ("%d",&s);
    int min = 1000, max_ilha [1111], max = 0;
    memcpy (max_ilha, ilhas [s], 4444);
    for (int i = 1; i <= n; i++){
        if ((ilhas [s][i] < min) && (ilhas [s][i] != 0))
            min = ilhas [s][i];
        if (i != s){
            ilhas [i][s] = 0;
            int temp = macaco_treinado(i);
            if (max_ilha[i] > temp)
                max_ilha[i] = temp;
            ilhas [i][s] = ilhas [s][i];
        }
        if (max_ilha [i] > max)
            max = max_ilha [i];
    }
    printf("%d\n", max-min); 

 return 0; 
}