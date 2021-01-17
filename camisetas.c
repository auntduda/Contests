#include<stdio.h>

int main(){

    int i, premiados, num_camisa[1100], tam_pequeno, tam_medio, total_pequeno=0, total_medio=0;

    scanf("%d", &premiados);

    for(i = 0; i<premiados; i++){
        scanf("%d", &num_camisa[i]);

        if(num_camisa[i] == 1){
            total_pequeno++;
        }

        if(num_camisa[i] == 2){
            total_medio++;
        }
    }

    scanf("%d %d", &tam_pequeno, &tam_medio);

    if(tam_pequeno >= total_pequeno && tam_medio >= total_medio){
        printf("S\n");

        return 0;
    }

    else{
        printf("N\n");

        return 0;
    }



}