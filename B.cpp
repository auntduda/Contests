#include<bits/stdc++.h>

using namespace std;

int funcao_f[1100000000], funcao_g[1100000000], funcao_h[1100000000000000000];

int main(){

    int instrucoes;

    scanf("%d", &instrucoes);

    for(i=0; i<instrucoes; i++){
        scanf("&d", &operacao);

        if(operacao == 1){
            scanf("%d %d", &coef, &conteudo);

            funcao_f[coef] = conteudo;
        }

        if(operacao == 2){
            scanf("%d %d", &coef, &conteudo);
            
            funcao_g[coef] = conteudo;
        }

        if(operacao == 3){
            funcao_h[coef] += 
        }

        if(operacao == 4){
            
        }
    }

}