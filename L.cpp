#include<bits/stdc++.h>

using namespace std;

char lavaspar[50][50], lavaspar2[50][50], palavras[20][15];

int l, h;

void busca_anagrama(int a, int b, int c){
    int m, n;
    
    if(a!=0 && b!=0 && a!=h-1 && b!=l-1){
        for(m=a-1; m<=a+1; m++){
            for(n=b-1; n<=b+1; n++){
                if(lavaspar[m][n] == palavras[c])

            }
        }
    }

}


int main(){

    int i, j, qtd_palavras;

    scanf("%d %d", &h, &l);

    for(i=0; i<h; i++){
        for(j=0; j<l; j++){
            scanf("%c", lavaspar[i][j]);
        }
    }

    scanf("%d", &qtd_palavras);

    for(i=0; i<qtd_palavras; i++){
        scanf("%s", palavras);

    }

    for(i=0; i<h; i++){
        for(j=0; j<l; j++){
            for(k=0; k<qtd_palavras; k++){
                if(lavaspar[i][j] == palavras[k][0]){
                    busca_anagrama(i, j, k);
                }
            }


        }
    }


}