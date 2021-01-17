#include <bits/stdc++.h>
using namespace std;

int caminhos[11000][4];

int maxi(int a, int b){return a > b ? a : b;}

int main(){
    int vertices, trilhas, i, j, max_velho=0, max_novo=0, total_percorrido=0, maior, prox=1;

    scanf("%d %d", &vertices, &trilhas);

    for(i=1; i<=trilhas; i++){
        for(j=1; j<=3; j++){
            scanf("%d", &caminhos[i][j]);
        }
    }

    while(prox != vertices){

        for(i=1; i<=trilhas; i++){
                if(caminhos[i][1] == prox){
                    max_velho = max_novo;
                    maior = maxi(max_novo, caminhos[i][3]);
                    if(max_velho != max_novo){
                        prox = caminhos[i][2];
                    }
                    max_novo = caminhos[i][3];

                }
        }

        total_percorrido += maior;
    }

    printf("%d\n", total_percorrido);

    return 0;

}

