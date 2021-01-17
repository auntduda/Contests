#include<stdio.h>

int main(){

    int i, j, n, calcada[510], qtd=0, flag[510];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &calcada[i]);
    }

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            if(calcada[i] == calcada[j] && (i != j+1 || i != j-1)){
                
                flag[i] = 1;

            }
        }
    }

    for(i = 0; i<n; i++){
        if(flag[i] == 1){
            flag[i] = flag[i] + 1;

            qtd += flag[i];
        }
    }

    printf("%d\n", qtd);

    return 0;

}