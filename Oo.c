#include<stdio.h>
#include<string.h>

int main(){

    int lin_ceu, col_ceu, lin_foto, col_foto, i, j, k, flag=0;
    scanf("%d %d %d %d", &lin_ceu, &col_ceu, &lin_foto, &col_foto);
    char ceu[lin_ceu][col_ceu], foto[lin_foto][col_foto];
    for(i=0; i<lin_ceu; i++){
        for(j=0; j<col_ceu; j++){
            scanf(" %c", &ceu[i][j]);
        }
    }
    for(i=0; i<lin_foto; i++){
        for(j=0; j<col_foto; j++){
            scanf(" %c", &foto[i][j]);
        }
    }
    for(i=0; i<lin_ceu - lin_foto; i++){
        char temp[col_foto];
        strncpy(temp, foto[0], col_foto);
        char *ptr = strstr(ceu[i], temp);
        if(ptr != NULL){
            flag=0;
            for(k=1; k<lin_foto && !flag; k++){
                if(strncmp(ptr+(col_ceu*k), foto[k], col_foto)){
                    flag = 1;
                    *ptr = '1';
                }
                else if(k+1 == lin_foto){
                    printf("%ld %ld\n", ((long)ptr-(long)ceu)/col_ceu, ((long)ptr-(long)ceu)%col_ceu);
                    return 0;
                }
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}