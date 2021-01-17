#include<stdio.h>
#include<string.h>

int main(){

    char p[110], a[110], apareceu;

    int tamanho, i, j, flag=0;

    scanf("%s %s", p, a);

    tamanho = strlen(p);

    for(i = 0; i<tamanho; i++){
        for(j = 0; j<tamanho; j++){
            if(a[j] == '*'){
                a[j] = apareceu;
            }

            if(p[i] == a[j] && (p[i] != '\0' || a[j] != '\0')){
                flag = 1;

                apareceu = p[i];
            }

            else{
                flag = 0;
            }

        }
    }

    if(flag){
        printf("S\n");

        return 0;
    }

    else{
        printf("N\n");

        return 0;
    }

}