#include<stdio.h>

int main(){

    int lin_ceu, col_ceu, lin_foto, col_foto, i, j, k, l, flag=0;

    scanf("%d %d %d %d", &lin_ceu, &col_ceu, &lin_foto, &col_foto);

    char ceu[lin_ceu][col_ceu], foto[lin_foto][col_foto];

    for(i=0; i<lin_ceu; i++){
        for(j=0; j<col_ceu; j++){
            scanf(" %c ", &ceu[i][j]);
        }
    }

    for(i=0; i<lin_foto; i++){
        for(j=0; j<col_foto; j++){
            scanf(" %c ", &foto[i][j]);
        }
    }

    for(i=0; i<lin_ceu; i++){
        for(j=0; j<col_ceu; j++){
            if(ceu[i][j] == foto[0][0]){
                flag=0;

                for(k=i; k<i+lin_foto && !flag; k++){
                    for(l=j; l<j+col_foto && !flag; l++){
                        if(ceu[k][l] != foto[k-i][l-j]){
                            flag = 1;
                        }

                        else if(k-i == lin_foto && l-j == col_foto){
                            printf("%d %d\n", i, j);

                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("-1 -1\n");

    return 0;

}